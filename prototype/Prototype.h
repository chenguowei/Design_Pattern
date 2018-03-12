//
// Created by 陈国威 on 2018/3/11.
//

#ifndef DESIGN_PATTERNS_PROTOTYPE_H
#define DESIGN_PATTERNS_PROTOTYPE_H

/*
 *  Prototype 模式提供了一个通过已存在对象进行新对象创建的接口(Clone)
 *  Clone() 实现和具体的语言相关，在 c++里面通过拷贝构造函数实现
 *
 *
 *  作用：
 *  	用原型实例执行创建对象的类型，并且通过拷贝这些原型创建新的对象
 * */


/*
 * Prototype 原型基类，定义Clone接口函数
 * */
class Prototype {

 protected:
  Prototype();	//使得不能创建对象

 public:
  virtual Prototype* Clone() const = 0;	//定义Clone接口，根据不痛的派生类来实例化对象
  virtual ~Prototype ();

};

class ConcretePrototype1 : public Prototype
{
 public:
  ConcretePrototype1();	//构造函数
  ~ConcretePrototype1 ();
  ConcretePrototype1(const ConcretePrototype1& cp);	//拷贝构造函数

  virtual Prototype* Clone() const;	//实现Clone
};

// 派生自 Prototype, 实现其接口函数
class ConcretePrototype2 : public Prototype
{
 public:
  ConcretePrototype2();	//构造函数
  ~ConcretePrototype2 ();	//析构函数
  ConcretePrototype2(const ConcretePrototype2& cp); // 拷贝构造函数
  virtual Prototype* Clone() const;	//实现Clone函数
};

#endif //DESIGN_PATTERNS_PROTOTYPE_H
