//
// Created by 陈国威 on 2018/3/26.
//

#include "Command.h"
#include <iostream>


using namespace std;

Command::Command ()
{

}

Command::~Command ()
{

}


// 具体命令子类
ConcreteCommand::ConcreteCommand (Receiver *pReceiver)
{
  this->_recv = pReceiver;
}

ConcreteCommand::~ConcreteCommand ()
{

}

void ConcreteCommand::Execute ()
{
  cout << "ConcreteCommand::Execute" << endl;
  this->_recv->Action ();
}


// 命令接收者
Receiver::Receiver ()
{

}

Receiver::~Receiver ()
{

}

void Receiver::Action ()
{
  cout << "Receiver::Action()" << endl;

}


// 命令的调用
Invoker::Invoker (Command *pCommand)
{
  this->_cmd = pCommand;
}

Invoker::~Invoker ()
{

}

void Invoker::Invoke ()
{
  this->_cmd->Execute ();
}

