//
// Created by 陈国威 on 2018/3/14.
//

#include <iostream>

#include "Adapter.h"

using namespace std;

Target::Target ()
{

}

Target::~Target ()
{

}

void Target::Request ()
{
  cout << "Target::Request() " << endl;
}


Adaptee::Adaptee ()
{

}

Adaptee::~Adaptee ()
{

}

void Adaptee::SpecificRequest ()
{
  cout << "Adaptee::SpecificRequest()" << endl;
}

// 类模式Adapter
Adapter::Adapter ()
{

}

Adapter::~Adapter ()
{

}

void Adapter::Request ()
{
  cout << "Adapter::Request()" << endl;
  this->SpecificRequest ();
  cout << "--------------------" << endl;
}

// 对象模式的 Adapter1
Adapter1::Adapter1 ():_adaptee(new Adaptee)
{

}

Adapter1::Adapter1 (Adaptee *adaptee)
{
  this->_adaptee = adaptee;
}

Adapter1::~Adapter1 ()
{

}

void Adapter1::Request ()
{
  cout << "Adapter1::Request()" << endl;
  _adaptee->SpecificRequest ();
  cout << "--------------------" << endl;
}


