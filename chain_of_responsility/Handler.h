//
// Created by 陈国威 on 2018/3/25.
//

#ifndef DESIGN_PATTERNS_HANDLER_H
#define DESIGN_PATTERNS_HANDLER_H

#include <iostream>
#include <string>

using namespace std;

class Manager
{
 protected:
  Manager*	m_manager;
  string	m_name;

 public:
  Manager(Manager* manager, string name):m_manager(manager), m_name(name)
  {

  }

  virtual void DealWithRequest(string name, int num){ }
};


// 经理
class CommonManager: public Manager
{
 public:

  CommonManager(Manager* manager, string name) : Manager(manager, name)
  {

  }

  virtual void DealWithRequest(string name, int num)
  {
    if (num < 500)
      {
        cout << "经理 " << m_name << " 批准 " << name << "加薪" << num << "元" << endl;
      }
    else
      {
        cout << "经理" << m_name << "无法处理，交给总监" << endl;
        m_manager->DealWithRequest (name, num);
      }

  }

};


class Majordomo : public Manager
{
 public:
  Majordomo(Manager* manager, string name) : Manager(manager, name)
  {

  }

  virtual void DealWithRequest(string name, int num)
  {
    if (num < 1000)
      {
        cout << "总监 " << m_name << " 批准" << name << "加薪" << num << " 元" << endl;
      }
    else
      {
        cout << "总监 " << m_name << " 无法处理，交给总经理处理" << endl;
        m_manager->DealWithRequest (name, num);
      }

  }
};


class GeneralManager : public Manager
{
 public:
  GeneralManager(Manager* manager, string name) : Manager(manager, name)
  {

  }

  virtual void DealWithRequest(string name, int num)
  {
    cout << "总经理" << m_name << " 批准" << name << " 加薪" << num << "元" << endl;

  }
};


#endif //DESIGN_PATTERNS_HANDLER_H
