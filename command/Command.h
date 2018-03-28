//
// Created by 陈国威 on 2018/3/26.
//

#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H

// 命令基类
class Command
{
 public:
  virtual ~Command ();
  virtual void Execute() = 0;

 protected:
  Command();

};


class Receiver;	// 提前声明

class ConcreteCommand : public Command
{
 public:
  ConcreteCommand(Receiver* pReceiver);
  ~ConcreteCommand ();
  virtual void Execute();

 private:
  Receiver*	_recv;
};



// 发起命令者
class Invoker
{
 public:
  Invoker(Command* pCommand);
  ~Invoker ();
  void Invoke();

 protected:

 private:
  Command*	_cmd;
};


// 命令的接受者
class Receiver
{
 public:
  Receiver();
  ~Receiver ();
  void Action();

 protected:

 private:

};

#endif //DESIGN_PATTERNS_COMMAND_H
