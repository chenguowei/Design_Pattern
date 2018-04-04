//
// Created by 陈国威 on 2018/4/3.
//

#include "Observer.h"
#include <iostream>
#include <algorithm>

using namespace std;

Observer::Observer ()
{

}

Observer::~Observer ()
{

}

ConcreteObserverA::ConcreteObserverA ()
{

}
ConcreteObserverA::~ConcreteObserverA ()
{

}

void ConcreteObserverA::Update (Subject *subject)
{
  this->m_state = subject->GetState ();
  cout << "The ConcreteObserverA is " << m_state << endl;
}


// ConcreteObserverB
ConcreteObserverB::ConcreteObserverB ()
{

}

ConcreteObserverB::~ConcreteObserverB ()
{ }

void ConcreteObserverB::Update (Subject *subject)
{
  this->m_state = subject->GetState ();
  cout << "The ConcreteObserverB is " << m_state << endl;
}


// subject
Subject::Subject ()
{ }

Subject::~Subject ()
{ }

void Subject::Attach (Observer *observer)
{
  this->m_vec.push_back (observer);
  cout << "Attach an Observer\n";
}

void Subject::Detach (Observer *observer)
{
  vector<Observer*>::iterator iter;
  iter = find(m_vec.begin(), m_vec.end(), observer);
  if (iter != m_vec.end())
    {
      m_vec.erase (iter);
    }

  cout << "Detach an Observer\n";
}

void Subject::Notify ()
{
  vector<Observer*>::iterator iter = this->m_vec.begin();
  for (; iter != m_vec.end(); iter++)
    {
      (*iter)->Update (this);
    }

}

string Subject::GetState ()
{
  return this->m_state;
}

void Subject::SetState (string state)
{
  this->m_state = state;
}

// 具体主题
ConcreteSubjectA::ConcreteSubjectA ()
{ }

ConcreteSubjectA::~ConcreteSubjectA ()
{ }


ConcreteSubjcetB::ConcreteSubjcetB ()
{ }

ConcreteSubjcetB::~ConcreteSubjcetB ()
{ }
