//
// Created by 陈国威 on 2018/3/18.
//

#include <iostream>
#include "decorator.h"


using namespace std;

Component::Component ()
{

}

Component::~Component ()
{

}


ConcreteComponent::ConcreteComponent ()
{

}

ConcreteComponent::~ConcreteComponent ()
{
  cout << "~ConcreteComponent" << endl;
}

void ConcreteComponent::Operation ()
{
  cout << "原职责：ConcreteComponent::Operation()" << endl;
}


// 装饰类基类
Decorator::Decorator (Component *com)
{
  this->_com = com;
}

Decorator::~Decorator ()
{
  cout << "~Decorator" << endl;
  delete _com;
  this->_com = NULL;
}

void Decorator::SetComponent (Component *com)
{
  this->_com = com;
}

void Decorator::Operation ()
{

}


// 具体的装饰类 1
ConcreteDecoratorA::ConcreteDecoratorA (Component *com) : Decorator (com)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA ()
{
  cout << "~ConcreteDecoratorA" << endl;
}

void ConcreteDecoratorA::Operation ()
{
  this->_com->Operation ();
  //附加职责A
  this->AddBehavorA ();
}

void ConcreteDecoratorA::AddBehavorA ()
{
  cout << "附加职责A: ConcreteDecoratorA:AddBehavorA()" << endl;
}

// 具体装饰类二
ConcreteDecoratorB::ConcreteDecoratorB (Component *com) : Decorator(com)
{

}

ConcreteDecoratorB::~ConcreteDecoratorB ()
{
  cout << "~ConcreteDecoratorB" << endl;
}


void ConcreteDecoratorB::Operation ()
{
  this->_com->Operation ();
  //附加职责B
  this->AddBehavorB ();
}

void ConcreteDecoratorB::AddBehavorB ()
{
  cout << "附加职责B: ConcreteDecoratorB:: AddBehavorB" << endl;
}


// 具体装饰类 三
ConcreteDecoratorC::ConcreteDecoratorC (Component *com) : Decorator(com)
{

}

ConcreteDecoratorC::~ConcreteDecoratorC ()
{
  cout << "~ConcreteDecoratorC " << endl;
}

void ConcreteDecoratorC::Operation ()
{
  this->_com->Operation ();
  // 附加职责C
  this->AddBehavorC ();
}

void ConcreteDecoratorC::AddBehavorC ()
{
  cout << "附加职责：ConcreteDecoratorC::AddBehavor()" << endl;
}



// 具体的装饰类 四
ConcreteDecoratorD::ConcreteDecoratorD (Component *com) : Decorator(com)
{

}

ConcreteDecoratorD::~ConcreteDecoratorD ()
{
  cout << "~ConcreteDecoratorD" << endl;
}

void ConcreteDecoratorD::Operation ()
{
  this->_com->Operation ();
  // 附加职责D
  this->AddBehavorD ();
}

void ConcreteDecoratorD::AddBehavorD ()
{
  cout << "附加职责: ConcreteDecoratorD::AddBehavorD()" << endl;
}


/*******  只添加一种装饰 *********///

DecoratorOnlyOne::DecoratorOnlyOne (Component *com) : _com(com)
{
}

DecoratorOnlyOne::~DecoratorOnlyOne ()
{
  cout << "~DecoratorOnlyOne" << endl;
  delete  this->_com;
  this->_com = NULL;
}

void DecoratorOnlyOne::Operation ()
{
  this->_com->Operation ();
  this->AddBehavor ();
}

void DecoratorOnlyOne::AddBehavor ()
{
  cout << "附加唯一职责: DecoratorOnlyOne::AddBehavor()" << endl;
}



