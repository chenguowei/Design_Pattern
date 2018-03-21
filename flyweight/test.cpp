//
// Created by 陈国威 on 2018/3/21.
//

#include "Document.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
  // 存储外部状态
  int ascent = 70;
  int descent = 0;
  int height = 100;
  int width = 120;
  int pointSize = 10;

  string test = "AABBCCDEFGHI";
  string::iterator it = test.begin ();
  characterFactory* pcF = new characterFactory();

  for (; it != test.end (); it++)
    {
      pointSize++;
      char c = *it;
      // 申请一个 character 对象
      character* charc = pcF->GetCharacter (c);
      // 应用外部状态
      charc->Display (width, height, ascent, descent, pointSize);
    }

  vector<character*>::size_type sizeChar = pcF->getCount ();

  cout << "count: " << sizeChar << endl;

  return 0;
}



