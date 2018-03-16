//
// Created by 陈国威 on 2018/3/16.
//

#include <iostream>

#include "Composite.h"

using namespace std;

Component::Component ()
{

}

Component::~Component ()
{

}

void Component::Add (Component *)
{
  cout << "add" << endl;
}

void Component::Remove (Component *)
{
  cout << "Remove" << endl;
}

void Component::Operation ()
{
  cout << "Component::Operation()" << endl;
}

Component* Component::GetChild (int index)
{
  return NULL;
}


// Leaf 类
Leaf::Leaf ()
{

}

Leaf::~Leaf ()
{

}

void Leaf::Operation ()
{
  cout << "Leaf::Operation()" << endl;
}


//Composite 类
Composite::Composite ()
{

}

Composite::~Composite ()
{

}

void Composite::Add (Component *com)
{
  if (NULL == com)
    return;
  this->m_ComVec.push_back (com);
}

void Composite::Remove (Component *com)
{
  if (NULL == com)
    return;
  vector<Component*>::iterator it = this->m_ComVec.begin ();
  for (; it != this->m_ComVec.end (); it++)
    {
      if (com == *it)
        this->m_ComVec.erase (it);
    }
}

void Composite::Operation ()
{
  cout << "Composite::Operation" << endl;
  vector<Component*>::iterator iter = this->m_ComVec.begin ();
  for (; iter != this->m_ComVec.end (); iter++)
    {
      (*iter)->Operation ();
    }
}

Component* Composite::GetChild (int index)
{
  if (index < 0 || index > this->m_ComVec.size ())
    {
      return NULL;
    }

  return this->m_ComVec.at (index);
}

