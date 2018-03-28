//
// Created by 陈国威 on 2018/3/20.
//

#include <iostream>

#include "Facade.h"

using namespace std;

Subsystem1::Subsystem1 ()
{

}

Subsystem1::~Subsystem1 ()
{

}

void Subsystem1::Operation1 ()
{
  cout << "Subsystem1::Operation" << endl;
}


// 子系统2
Subsystem2::Subsystem2 ()
{

}

Subsystem2::~Subsystem2 ()
{

}

void Subsystem2::Operation2 ()
{
  cout << "Subsystem2::Operation()" << endl;
}


// facade 类
Facade::Facade ()
{
  this->_subsys1 = new Subsystem1();
  this->_subsys2 = new Subsystem2();
}

Facade::~Facade ()
{
  delete this->_subsys1;
  delete this->_subsys2;

  _subsys1 = NULL;
  _subsys2 = NULL;
}

void Facade::OperationWrapper ()
{
  this->_subsys1->Operation1 ();
  this->_subsys2->Operation2 ();
}
