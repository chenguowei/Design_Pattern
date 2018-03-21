//
// Created by 陈国威 on 2018/3/21.
//

#ifndef DESIGN_PATTERNS_DOCUMENT_H
#define DESIGN_PATTERNS_DOCUMENT_H

#include <string>
#include <vector>

using namespace std;

// The "Flyweight" abstract class
class character
{
 public:
  // 析构函数
  virtual ~character ();
  // 应用内部状态
  virtual void Display(int width, int height, int ascent, int descent, int pointSize) = 0;
  // 获取内部状态
  virtual char GetSymbol() = 0;

 protected:
  // 内部状态
  char _symbol;

  // 外部状态
  int _width;
  int _height;
  int _ascent;
  int _descent;
  int _pointSize;

  // 构造函数
  character(char c);
};


//A 'ConcreteFlyweight' class
class characterA : public character
{
 public:
  characterA(char c);
  ~characterA ();

  virtual void Display(int width, int height, int ascent, int descent, int pointSize);
  virtual char GetSymbol();

 protected:
};


class characterB : public character
{
 public:
  characterB(char c);
  ~characterB ();

  virtual void Display(int width,int height,int ascent,int descent,int pointSize);
  virtual char GetSymbol();

 protected:
 private:

};

// c 'ConcreteFlyweight' class
class characterC : public character
{
 public:
  characterC(char c);
  ~characterC();
  virtual void Display(int width,int height,int ascent,int descent,int pointSize);
  virtual char GetSymbol();

  protected:
  private:
};

//D 'ConcreteFlyweight' class
class characterD:public character
{
public:
characterD(char c);
~characterD();
virtual void Display(int width,int height,int ascent,int descent,int pointSize);
  virtual char GetSymbol();

protected:
private:
};


// The 'FlyweightFactor' class
class characterFactory
{
 public:
  characterFactory();
  ~characterFactory ();

  // 申请一个character对象
  character* GetCharacter(char );

  // 获取存储的 character* 数量
  vector<character*>::size_type getCount();

 private:
  // 保存character 的容器，可以换成 list 等容器
  vector<character*> m_vecCharacter;
};
#endif //DESIGN_PATTERNS_DOCUMENT_H
