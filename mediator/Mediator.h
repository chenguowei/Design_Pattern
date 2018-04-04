//
// Created by 陈国威 on 2018/3/29.
//

#ifndef DESIGN_PATTERNS_MEDIATOR_H
#define DESIGN_PATTERNS_MEDIATOR_H

#include <string>

using namespace std;

class Mediator;

class Colleage
{
 public:
  virtual ~Colleage ();
  virtual void SetMediator(Mediator*);
  virtual void SendMsg(string) = 0;
  virtual void GetMsg(string) = 0;

 protected:
  Colleage(Mediator*);
  Mediator*	_mediator;

 private:

};


// 具体的同事类
class ConcreteColleageA : public Colleage
{
 public:
  ConcreteColleageA(Mediator*);
  ~ConcreteColleageA ();
  virtual void SendMsg(string msg);
  virtual void GetMsg(string&);

 private:

 protected:
};

class ConcreteColleageB : public Colleage
{
 public:
  ConcreteColleageB(Mediator*);
  ~ConcreteColleageB ();
  virtual void SendMsg(string msg);
  virtual void GetMsg(string&);

 protected:

 private:

};


// 中介者基类
class Mediator
{
 public:
  virtual ~Mediator ();
  virtual void SendMsg(string, Colleage*) = 0;

 protected:
  Mediator();

 private:

};


// 具体的中介者类
class ConcreteMediator : public Mediator
{
 public:
  ConcreteMediator();
  ~ConcreteMediator ();
  void SetColleageA(Colleage*);
  void SetColleageB(Colleage*);
  virtual void SendMsg(string msg, Colleage*);

 protected:

 private:
  Colleage*	m_ColleageA;
  Colleage* m_ColleageB;
};



#endif //DESIGN_PATTERNS_MEDIATOR_H
