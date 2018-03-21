//
// Created by 陈国威 on 2018/3/21.
//

#include "Document.h"
#include <iostream>

using namespace std;

character::character (char c)
{
  this->_symbol = c;
}

character::~character ()
{

}

// A
characterA::characterA (char c) : character(c)
{

}

characterA::~characterA ()
{

}

char characterA::GetSymbol ()
{
  return this->_symbol;
}

void characterA::Display (int width, int height, int ascent, int descent, int pointSize)
{
  // 接收并作用外部状态
  this->_ascent = ascent;
  this->_descent = descent;
  this->_height = height;
  this->_pointSize = pointSize;
  this->_width = width;

  cout << this->_symbol << " "
       << this->_ascent << " "
       << this->_descent << " "
       << this->_height << " "
       << this->_pointSize << " "
       << this->_width << endl;
}

characterB::characterB(char c) : character(c)
{

}

characterB::~characterB ()
{

}

char characterB::GetSymbol ()
{
  return this->_symbol;
}

void characterB::Display (int width, int height, int ascent, int descent, int pointSize)
{
  // 接收并作用外部状态
  this->_ascent = ascent;
  this->_descent = descent;
  this->_height = height;
  this->_pointSize = pointSize;
  this->_width = width;

  cout << this->_symbol << " "
       << this->_ascent << " "
       << this->_descent << " "
       << this->_height << " "
       << this->_pointSize << " "
       << this->_width << endl;
}


// C
characterC::characterC(char c) : character(c)
{

}

characterC::~characterC ()
{

}

char characterC::GetSymbol ()
{
  return this->_symbol;
}

void characterC::Display (int width, int height, int ascent, int descent, int pointSize)
{
  // 接收并作用外部状态
  this->_ascent = ascent;
  this->_descent = descent;
  this->_height = height;
  this->_pointSize = pointSize;
  this->_width = width;

  cout << this->_symbol << " "
       << this->_ascent << " "
       << this->_descent << " "
       << this->_height << " "
       << this->_pointSize << " "
       << this->_width << endl;
}

// D class
characterD::characterD(char c) : character(c)
{

}

characterD::~characterD ()
{

}

char characterD::GetSymbol ()
{
  return this->_symbol;
}

void characterD::Display (int width, int height, int ascent, int descent, int pointSize)
{
  // 接收并作用外部状态
  this->_ascent = ascent;
  this->_descent = descent;
  this->_height = height;
  this->_pointSize = pointSize;
  this->_width = width;

  cout << this->_symbol << " "
       << this->_ascent << " "
       << this->_descent << " "
       << this->_height << " "
       << this->_pointSize << " "
       << this->_width << endl;
}


// factory
characterFactory::characterFactory ()
{

}

characterFactory::~characterFactory ()
{

}

character* characterFactory::GetCharacter (char c)
{
  vector<character*>::iterator iter = this->m_vecCharacter.begin ();

  for (; iter != this->m_vecCharacter.end (); iter++)
    {
      if ((*iter)->GetSymbol () == c)
        {
          return *iter;
        }
    }

  character* pf;
  switch (c)
    {
      case 'A':
        pf = new characterA(c);
      break;

      case 'B':
        pf = new characterB(c);
      break;

      case 'C':
        pf = new characterC(c);
      break;

      case 'D':
        pf = new characterD(c);
      break;

      default:
        pf = new characterA(c);
      break;
    }
  //character* pf = new characterA(c);
  this->m_vecCharacter.push_back (pf);

  return pf;
}


vector<character*>::size_type characterFactory::getCount ()
{
  return this->m_vecCharacter.size ();
}
