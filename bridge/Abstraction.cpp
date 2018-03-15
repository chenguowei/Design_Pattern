//
// Created by 陈国威 on 2018/3/15.
//

#include <iostream>

#include "Abstraction.h"
#include "AbstractionImplement.h"

using namespace std;

Abstraction::Abstraction ()
{

}

Abstraction::~Abstraction ()
{

}

RefinedAbstractionA::RefinedAbstractionA (AbstractionImplement *imp)
{
  this->_imp = imp;
}

RefinedAbstractionA::~RefinedAbstractionA ()
{
  delete this->_imp;
  this->_imp = NULL;
}

void RefinedAbstractionA::Operation ()
{
  cout << "RefinedAbstractionA::Operation " << endl;
  this->_imp->Operation ();
}



RefinedAbstractionB::RefinedAbstractionB (AbstractionImplement *imp)
{
  this->_imp = imp;
}

RefinedAbstractionB::~RefinedAbstractionB ()
{
  delete this->_imp;
  this->_imp = NULL;
}

void RefinedAbstractionB::Operation ()
{
  cout << "RefinedAbstractionB::Operation " << endl;
  this->_imp->Operation ();
}

