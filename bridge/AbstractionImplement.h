//
// Created by 陈国威 on 2018/3/15.
//

#ifndef DESIGN_PATTERNS_ABSTRACTIONIMPLEMENT_H
#define DESIGN_PATTERNS_ABSTRACTIONIMPLEMENT_H

// 抽象类，定义了实现的接口
class AbstractionImplement
{
 public:
  virtual void Operation()=0;	// 定义操作接口
  virtual ~AbstractionImplement ();

 protected:
  AbstractionImplement();
};

// 继承自AbstractionImplement, 是AbstractionImplement 的不同实现之一
class ConcreteAbstractionImplementA : public AbstractionImplement
{
 public:
  ConcreteAbstractionImplementA();
  virtual void Operation();	// 实现接口
  ~ConcreteAbstractionImplementA ();

 protected:

};

// 继承自 AbstractionImplement, 是 AbstractionImplement的不同实现之一
class ConcreteAbstractionImplementB: public AbstractionImplement
{
 public:
  ConcreteAbstractionImplementB();	// 构造函数
  virtual void Operation();	// 实现接口
  ~ConcreteAbstractionImplementB ();

 protected:

};



#endif //DESIGN_PATTERNS_ABSTRACTIONIMPLEMENT_H
