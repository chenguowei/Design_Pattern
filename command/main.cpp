//
// Created by 陈国威 on 2018/3/26.
//

#include "Command.h"

int main(void)
{
  // 创建具体命令对象pCmd 并设定它的接收者pRev
  Receiver* pRev = new Receiver();
  Command*	pcmd = new ConcreteCommand(pRev);

  //请求绑定命令
  Invoker* pInv = new Invoker(pcmd);
  pInv->Invoke ();

  return 0;
}

