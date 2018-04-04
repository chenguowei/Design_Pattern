//
// Created by 陈国威 on 2018/4/4.
//

#include "State.h"

int main()
{
  State* pState = new ConcreteStateA();
  Context* pContext = new Context(pState);
  pContext->Request ();
  pContext->Request ();
  pContext->Request ();
  pContext->Request ();

  delete pState;
  delete pContext;

  return 0;
}

