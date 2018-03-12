//
// Created by 陈国威 on 2018/3/11.
//

#include "Singleton.h"
#include <iostream>

using namespace std;

// 在这里初始化，是 饿汉式的变种
Singleton* Singleton::pInstance = NULL;

Singleton::Singleton ()
{
  cout << "Singleton" << endl;
}

Singleton* Singleton::Instance ()
{
  if (NULL == pInstance)
    {
      pInstance = new Singleton();
    }

  return pInstance;
}

void Singleton::Destroy ()
{
  delete pInstance;
  pInstance = NULL;
  cout << "Destroy" << endl;
}

