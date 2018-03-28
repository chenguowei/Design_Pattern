//
// Created by 陈国威 on 2018/3/25.
//

#include <iostream>

#include "Handler.h"

using namespace std;

int main(void)
{
  Manager* general = new GeneralManager(NULL, "陈国威");
  Manager* majordomo = new Majordomo(general, "b");
  Manager* common = new CommonManager(majordomo, "c");

  common->DealWithRequest ("d", 400);
  common->DealWithRequest ("d", 700);
  common->DealWithRequest ("d", 1200);

  return 0;
}

