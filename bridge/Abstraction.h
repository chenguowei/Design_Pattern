//
// Created by 陈国威 on 2018/3/15.
//

#ifndef DESIGN_PATTERNS_ABSTRACTION_H
#define DESIGN_PATTERNS_ABSTRACTION_H

class AbstractionImplement;

class Abstraction
{
 public:
  virtual void Operation() = 0;	// 定义接口，表示该类所支持的操作
  virtual ~Abstraction ();

 protected:
  Abstraction();
};


class RefinedAbstractionA : public Abstraction
{
 public:

  RefinedAbstractionA(AbstractionImplement* imp);	//构造函数
  virtual void Operation();	// 实现接口
  virtual ~RefinedAbstractionA ();	// 析构函数

 private:
  AbstractionImplement* _imp;	// 私有成员
};

class RefinedAbstractionB : public Abstraction
{
 public:
  RefinedAbstractionB(AbstractionImplement *imp);	// 构造函数
  virtual void Operation();	// 实现接口
  virtual ~RefinedAbstractionB ();	// 析构函数

 private:
  AbstractionImplement* _imp;
};







#endif //DESIGN_PATTERNS_ABSTRACTION_H
