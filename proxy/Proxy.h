//
// Created by 陈国威 on 2018/3/22.
//

#ifndef DESIGN_PATTERNS_PROXY_H
#define DESIGN_PATTERNS_PROXY_H

// 定义了 Proxy 和 ConcreteSubject 的共有接口
// 这样就可以在任何需要使用到 ConcreteSubject的地方都使用Proxy

class Subject
{
 public:
  virtual ~Subject ();
  virtual void Request() = 0;

 protected:
  Subject();
};


// 定义了代理角色所代表的对象
class ConcreteSubject : public Subject
{
 public:
  ConcreteSubject();
  ~ConcreteSubject ();

  virtual void Request();

};


// 定义代理类
class Proxy : public Subject
{
 public:
  Proxy();
  ~Proxy ();
  void DoSomething1();
  virtual void Request();
  void DoSomething2();

 private:
  Subject*	_subject;
};


#endif //DESIGN_PATTERNS_PROXY_H
