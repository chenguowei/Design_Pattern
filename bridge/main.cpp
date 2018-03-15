//
// Created by 陈国威 on 2018/3/15.
//

#include <iostream>

#include "Abstraction.h"
#include "AbstractionImplement.h"

using namespace std;

int main()
{
  /*
   * 将抽象部分与它的实现部分分离，使得它们可以独立地变化
   *
   * 1、抽象 Abstraction 与实现 AbstractionImplement 分离
   *
   * 2、抽象部分Abstraction可以变化，如new RefinedAbstractionA(imp) new RefinedAbstractionB(imp2)
   *
   * 3、实现部分AbstractionImplement也可以变化,如new AbstractionImplementA()、new AbstractionImplementB()
   *
   * */

  AbstractionImplement* imp = new ConcreteAbstractionImplementA();
  Abstraction* abs = new RefinedAbstractionA(imp);
  imp->Operation ();

  cout << "------------------------------------" << endl;

  AbstractionImplement* impl = new ConcreteAbstractionImplementB();
  Abstraction* abs1 = new RefinedAbstractionB(impl);
  abs1->Operation ();

  cout << "------------------------------------" << endl;

  AbstractionImplement* imp2 = new ConcreteAbstractionImplementA();
  Abstraction* abs2 = new RefinedAbstractionB(imp2);
  abs2->Operation ();

  cout << "------------------------------------" << endl;

  AbstractionImplement* imp3 = new ConcreteAbstractionImplementB();
  Abstraction* abs3 = new RefinedAbstractionB(imp3);
  abs3->Operation ();

  cout << endl;
  return 0;
}

