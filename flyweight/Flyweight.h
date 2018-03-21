//
// Created by 陈国威 on 2018/3/21.
//

#ifndef DESIGN_PATTERNS_FLYWEIGHT_H
#define DESIGN_PATTERNS_FLYWEIGHT_H

#include <string>
#include <vector>

using namespace std;

// 基类，定义操作接口 Operation
class Flyweight
{
 public:
  // 操作外部状态 extrinsicState
  virtual void Operation(const string& extrinsisState) = 0;
  string GetIntrinsicState();
  virtual ~Flyweight ();

 protected:
  Flyweight(string intrinsicState);

 private:
  // 内部状态，也可以放在ConcreteFlyweight中
  string _intrinsincState;

};

class ConcreteFlyweight: public Flyweight
{
 public:
  // 实现接口函数
  virtual void Operation(const string& extrinsicState);
  ConcreteFlyweight(string intrinsicState);
  ~ConcreteFlyweight ();

};


class UnsharedConcreteFlyweight: public Flyweight
{
 public:
  virtual void Operation(const string& extrinsicState);
  UnsharedConcreteFlyweight(string intrinsicState);
  ~UnsharedConcreteFlyweight ();

};


// Flyweight 工厂类
class FlyweightFactory
{
 public:
  FlyweightFactory();
  ~FlyweightFactory ();

  // 获得一个请求的Flyweight 对象
  Flyweight* GetFlyweight(string key);
  // 获取容器中存储的对象数量
  int GetFlyweightCount();
 protected:

 private:
  // 保存内部状态对象的容器
  vector<Flyweight*>  m_vecFly;
};
#endif //DESIGN_PATTERNS_FLYWEIGHT_H
