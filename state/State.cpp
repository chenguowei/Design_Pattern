//
// Created by 陈国威 on 2018/4/4.
//
#include "State.h"
#include <iostream>

using namespace std;

State::State ()
{ }

State::~State ()
{ }

ConcreteStateA::ConcreteStateA ()
{ }

ConcreteStateA::~ConcreteStateA ()
{ }

// 执行该状态的行为并改变状态
void ConcreteStateA::Handle (Context *pContext)
{
  cout << "ConcreteStateA " << endl;
  pContext->ChangeState (new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB ()
{ }

ConcreteStateB::~ConcreteStateB ()
{ }

// 执行该状态的行为并改变状态
void ConcreteStateB::Handle (Context *pContext)
{
  cout << "ConcreteStateB" << endl;
  pContext->ChangeState (new ConcreteStateC());
}

ConcreteStateC::ConcreteStateC ()
{ }

ConcreteStateC::~ConcreteStateC ()
{ }

//执行该状态的行为并改变状态
void ConcreteStateC::Handle (Context *pContext)
{
  cout << "ConcreteStateC" << endl;
  pContext->ChangeState (new ConcreteStateA());
}


//定义_state的初始状态
Context::Context (State *pState)
{
  this->_state = pState;
}

Context::~Context ()
{ }

// 对请求处理，并设置下一个状态
void Context::Request ()
{
  if (NULL != this->_state)
    {
      this->_state->Handle (this);
    }
}

//改变状态
void Context::ChangeState (State *pState)
{
  this->_state = pState;
}
