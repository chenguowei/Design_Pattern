//
// Created by 陈国威 on 2018/3/14.
//

#ifndef DESIGN_PATTERNS_ADAPTER_H
#define DESIGN_PATTERNS_ADAPTER_H


// 目标接口类，客户需要的接口
class Target
{
 public:
  Target();
  virtual ~Target ();
  virtual void Request();	// 定义标准接口
};


// 需要适配的类
class Adaptee
{
 public:
  Adaptee();
  ~Adaptee ();
  void SpecificRequest();

};

// 类模式，适配器类，通过 public 继承获得接口继承的效果，通过private 继承获得实现继承的效果
class Adapter : public Target, private Adaptee
{
 public:
  Adapter();
  ~Adapter ();
  virtual void Request();	//实现Target 定义的Request接口
};

// 对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用
class Adapter1 : public Target
{
 public:
  Adapter1(Adaptee* adaptee);
  Adapter1();
  ~Adapter1 ();
  virtual void Request();	// 实现Target定义的Request接口

 private:
  Adaptee* _adaptee;
};
#endif //DESIGN_PATTERNS_ADAPTER_H
