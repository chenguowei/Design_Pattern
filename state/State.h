//
// Created by 陈国威 on 2018/4/4.
//

#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H

class Context;
// 抽象的状态类
class State
{
 public:
  virtual void Handle(Context* pContext);
  ~State ();

 protected:
  State();
 private:
};

class ConcreteStateA : public State
{
 public:
  ConcreteStateA();
  ~ConcreteStateA ();
  virtual void Handle(Context* pContext);

 protected:
 private:
};

class ConcreteStateB : public State
{
 public:
  ConcreteStateB();
  ~ConcreteStateB ();
  virtual void Handle(Context* pContext);
 protected:
 private:
};

class ConcreteStateC : public State
{
 public:
  ConcreteStateC();
  ~ConcreteStateC ();
  virtual void Handle(Context* pContext);

 protected:
 private:
};

// Context
class Context
{
 public:
  Context(State* pState);
  ~Context ();
  void Request();
  void ChangeState(State* pState);

 protected:
 private:
  State* _state;
};

#endif //DESIGN_PATTERNS_STATE_H
