//
// Created by 陈国威 on 2018/4/9.
//

#include "TemplateMethod.h"

int main()
{
  // ConcreteClassA 与 ConcreteClassB 可相互替换
  AbstractClass* pAbstract = new ConcreteClassA();
  pAbstract->TemplateMethod ();

  pAbstract = new ConcreteClassB();
  pAbstract->TemplateMethod ();

  return 0;
}

