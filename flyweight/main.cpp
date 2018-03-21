//
// Created by 陈国威 on 2018/3/21.
//


#include <iostream>

#include "Flyweight.h"

using namespace std;

int main(void)
{
  // 外部状态
  string extrinsicState = "ext";

  // 工厂对象
  FlyweightFactory* fc = new FlyweightFactory();

  // 向工厂申请一个Flyweight对象
  Flyweight* fly = fc->GetFlyweight ("hello");

  Flyweight* fly1 = fc->GetFlyweight ("hello");

  //应用外部状态
  fly->Operation (extrinsicState);

  cout << fc->GetFlyweightCount () << endl;

  return 0;
}