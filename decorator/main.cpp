//
// Created by 陈国威 on 2018/3/18.
//

#include <iostream>

#include "decorator.h"


using namespace std;

int main()
{
  Component* pCom = new ConcreteComponent();
  Decorator* pDec = NULL;
  pDec = new ConcreteDecoratorA(pCom);          // 给装饰对象附加职责A
  pDec = new ConcreteDecoratorB(pDec);          // 给装饰对象附加职责B
  pDec = new ConcreteDecoratorC(pDec);          // 给装饰对象附加职责C
  pDec = new ConcreteDecoratorD(pDec);          // 给装饰对象附加职责D
  pDec->Operation ();


  cout << "--------------------------" << endl;


  // 只添加一种修饰
  Component* pCom1 = new ConcreteComponent();
  DecoratorOnlyOne* pDec1 = new DecoratorOnlyOne(pCom1);
  pDec1->Operation ();

  cout << "--------------------------" << endl;

  delete pDec;
  cout << "--------------------------" << endl;

  delete pDec1;

  return 0;
}


