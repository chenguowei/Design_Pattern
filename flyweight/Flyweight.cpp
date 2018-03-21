//
// Created by 陈国威 on 2018/3/21.
//

#include <iostream>

#include "Flyweight.h"

using namespace std;

Flyweight::Flyweight (string intrinsicState)
{
  this->_intrinsincState = intrinsicState;
}

Flyweight::~Flyweight ()
{

}

string Flyweight::GetIntrinsicState ()
{
  return this->_intrinsincState;
}


// 具体类
ConcreteFlyweight::ConcreteFlyweight (string intrinsicState) : Flyweight(intrinsicState)
{

}

ConcreteFlyweight::~ConcreteFlyweight ()
{

}

void ConcreteFlyweight::Operation (const string &extrinsicState)
{
  cout << this->GetIntrinsicState () << endl;
  cout << extrinsicState << endl;
}


// 具体的不分享类
UnsharedConcreteFlyweight::UnsharedConcreteFlyweight (string intrinsicState) : Flyweight(intrinsicState)
{

}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight ()
{

}

void UnsharedConcreteFlyweight::Operation (const string &extrinsicState)
{
  cout << "extrinsicState " << endl;
}


// 工厂类
FlyweightFactory::FlyweightFactory ()
{

}

FlyweightFactory::~FlyweightFactory ()
{

}

Flyweight* FlyweightFactory::GetFlyweight (string key)
{
  vector<Flyweight*>::iterator iter = m_vecFly.begin ();
  for (; iter != this->m_vecFly.end (); iter++)
    {
      if ((*iter)->GetIntrinsicState () == key)
        {
          return *iter;
        }
    }

  Flyweight* fly = new ConcreteFlyweight(key);
  m_vecFly.push_back (fly);
  return fly;
}

int FlyweightFactory::GetFlyweightCount ()
{
  return this->m_vecFly.size ();
}

