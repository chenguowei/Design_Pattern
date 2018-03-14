//
// Created by 陈国威 on 2018/3/14.
//

#include "Adapter.h"

int main()
{
  // 类模式Adapter
  Target* pTarget = new Adapter();
  pTarget->Request ();


  // 对象模式Adapter1
  Adaptee* adaptee = new Adaptee();
  Target* pTarget1 = new Adapter1(adaptee);
  pTarget1->Request ();

  // 对象模式Adapter2
  Target* pTarget2 = new Adapter1();  // 使用默认的构造函数
  pTarget2->Request ();

  return 0;
}

