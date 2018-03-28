//
// Created by 陈国威 on 2018/3/22.
//

#include "Proxy.h"
#include <iostream>

using namespace std;

Subject::Subject ()
{

}

Subject::~Subject ()
{

}


// 需要代理的类
ConcreteSubject::ConcreteSubject ()
{

}

ConcreteSubject::~ConcreteSubject ()
{}

void ConcreteSubject::Request ()
{
  cout << "ConcreteSubject::Request" << endl;
}


// 代理类

Proxy::Proxy () : _subject(NULL)
{ }

Proxy::~Proxy ()
{
  delete _subject;
  this->_subject = NULL;
}

void Proxy::DoSomething1 ()
{
  cout << "Proxy::Dosomething1" << endl;
}

void Proxy::DoSomething2 ()
{
  cout << "Proxy::Dosomething2 " << endl;
}

void Proxy::Request ()
{
  if (NULL == _subject)
    {
      _subject = new ConcreteSubject();
    }

  this->DoSomething1 ();  // 表示执行代理前 额外附加的操作

  this->Request ();       // 代理实体类的操作

  this->DoSomething2 ();  // 表示执行代理后 额外附加的操作

}






