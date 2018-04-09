//
// Created by 陈国威 on 2018/4/8.
//

#ifndef DESIGN_PATTERNS_STRATEGY_H
#define DESIGN_PATTERNS_STRATEGY_H

// 算法基类
class Strategy
{
 public:
  ~Strategy ();
  virtual void AlgrithmInterface() = 0;

 protected:
  Strategy();

 private:
};


// 具体的算法
class ConcreteStrategyA : public Strategy
{
 public:
  ConcreteStrategyA();
  ~ConcreteStrategyA ();

  virtual void AlgrithmInterface();

 protected:
 private:
};


class ConcreteStrategyB : public Strategy
{
 public:
  ConcreteStrategyB();
  ~ConcreteStrategyB ();
  virtual void AlgrithmInterface();

 protected:
 private:

};


/*
 *这个类是 Strategy 模式的关键
 * 也是 Stretegy模式 和 Template模式的根本区别所在
  *Strategy 通过"组合"（委托）方式实现算法（实现）的异构
  * 而Template 模式则采取的是继承的方式
  * 这两个模式的区别也是继承和组合两种实现接口重用的方式的区别
 * */


class Context
{
 public:
  Context(Strategy* strategy);
  ~Context ();
  void DoAction();

 private:
  Strategy*	_strategy;
};

#endif //DESIGN_PATTERNS_STRATEGY_H
