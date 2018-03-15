//
// Created by 陈国威 on 2018/3/15.
//

#include <iostream>

#include "AbstractionImplement.h"

using namespace std;

AbstractionImplement::AbstractionImplement ()
{

}

AbstractionImplement::~AbstractionImplement ()
{

}

ConcreteAbstractionImplementA::ConcreteAbstractionImplementA ()
{

}

ConcreteAbstractionImplementA::~ConcreteAbstractionImplementA ()
{

}

void ConcreteAbstractionImplementA::Operation ()
{
  cout << "ConcreteAbstractionImplementA::Operation()" << endl;
}

ConcreteAbstractionImplementB::ConcreteAbstractionImplementB ()
{

}

ConcreteAbstractionImplementB::~ConcreteAbstractionImplementB ()
{

}

void ConcreteAbstractionImplementB::Operation ()
{
  cout << "ConcreteAbstractionImplementB::Operation()" << endl;
}

