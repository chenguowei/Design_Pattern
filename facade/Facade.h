//
// Created by 陈国威 on 2018/3/20.
//

#ifndef DESIGN_PATTERNS_FACADE_H
#define DESIGN_PATTERNS_FACADE_H

// 子系统类
class Subsystem1
{
 public:
  Subsystem1();
  ~Subsystem1 ();
  void Operation1();

};

class Subsystem2
{
 public:
  Subsystem2();
  ~Subsystem2 ();
  void Operation2();
};

class Facade
{
 public:
  Facade();
  ~Facade ();
  void OperationWrapper();

 private:
  Subsystem1*	_subsys1;
  Subsystem2*	_subsys2;
};

#endif //DESIGN_PATTERNS_FACADE_H
