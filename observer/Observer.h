//
// Created by 陈国威 on 2018/4/3.
//
/*
 *  观察者模式，
 *  使用场景:
 *  	当一个对象的改变需要同时改变其他对象的时候，而且它不知道具体有多少对象有待改变（发布-订阅模式）
 * */

#ifndef DESIGN_PATTERNS_OBSERVER_H
#define DESIGN_PATTERNS_OBSERVER_H

#include <string>
#include <vector>

using namespace std;

class Subject;

class Observer
{
 public:
  ~Observer ();
  virtual void Update(Subject* subject) = 0;

 protected:
  Observer();
};

// 具体 的观察类
class ConcreteObserverA : public Observer
{
 public:
  ConcreteObserverA();
  ~ConcreteObserverA ();
  virtual void Update(Subject* subject);

 protected:

 private:
  string m_state;

};


class ConcreteObserverB : public Observer
{
 public:
  ConcreteObserverB();
  ~ConcreteObserverB ();
  virtual void Update(Subject* subject);

 protected:

 private:
  string m_state;
};


// 主题基类
class Subject
{
 public:
  ~Subject ();
  virtual void Notify();
  virtual void Attach(Observer* observer);
  virtual void Detach(Observer* observer);
  virtual string GetState();
  virtual void SetState(string state);

 protected:
  Subject();

 private:
  string m_state;
  vector<Observer*> m_vec;
};

//
class ConcreteSubjectA : public Subject
{
 public:
  ConcreteSubjectA();
  ~ConcreteSubjectA ();
 protected:
 private:
};

class ConcreteSubjcetB : public Subject
{
 public:
  ConcreteSubjcetB();
  ~ConcreteSubjcetB ();
 protected:
 private:
};

#endif //DESIGN_PATTERNS_OBSERVER_H
