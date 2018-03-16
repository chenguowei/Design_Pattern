//
// Created by 陈国威 on 2018/3/16.
//

#ifndef DESIGN_PATTERNS_COMPOSITE_H
#define DESIGN_PATTERNS_COMPOSITE_H

#include <vector>

using namespace std;

/*
 * Composite 组合模式
 * 作用：将对象组合成树形结构以表示"部分-整体"的层次结构。
 * 		Composite 使得用户对单个对象和组合对象的使用具有一致性
 * */

/*
 * Component 抽象基类，为组合中的对象声明接口，声明了类共有接口的缺省行为
 * 			声明一个接口函数可以访问 Component的子组件
 * */

class Component
{
 public:
  // 纯虚函数，只提供接口，没有默认的实现
  virtual void Operation() = 0;

  // 虚函数，提供接口，有默认的实现就是什么都不做
  virtual void Add(Component *);
  virtual void Remove(Component *);
  virtual Component* GetChild(int index);
  virtual ~Component ();

 protected:
  Component();
};

// Leaf 是叶子结点，也就是不含有子组件的结点类，所有不用实现Add. Remove. GetChild()等方法
class Leaf : public Component
{
 public:
  // 只实现 Operation 接口
  virtual void Operation();
  Leaf();
  virtual ~Leaf ();
};

// Composite : 含有子组件的类
class Composite : public Component
{
 public:
  Composite();
  ~Composite ();

  // 实现所有接口
  void Operation();
  void Add(Component *);
  void Remove(Component *);
  Component* GetChild(int index);

 private:
  // 采用 vector 来保存子组件
  vector<Component*> m_ComVec;
};

#endif //DESIGN_PATTERNS_COMPOSITE_H
