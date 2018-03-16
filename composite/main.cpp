//
// Created by 陈国威 on 2018/3/16.
//

#include <iostream>

#include "Composite.h"

using namespace std;

int main(void)
{
  /*
   *
   *  不管是叶子Leaf 还是Composite 对象 pRoot. pCom都实现了Operation,所以可以一致对待
   *
   *  体现了 "使得用户对于单个对象和组合对象的使用具有一致性"
   * */

  Composite* pRoot = new Composite();

  // 组合对象添加叶子节点
  pRoot->Add (new Leaf());

  Leaf* pLeaf1 = new Leaf();
  Leaf* pLeaf2 = new Leaf();

  // 这里的叶子再添加叶子是没有意义的
  //


  // 执行叶子 Operation 操作
  pLeaf1->Operation ();

  // 组合对象实现了基类 Component 的所有接口，所以可以做各种操作
  Composite* pCom = new Composite();
  // 组合对象添加叶子节点
  pCom->Add (pLeaf1);

  // 组合对象添加叶子节点
  pCom->Add (pLeaf2);
  // 执行组合对象Operation 对象
  pCom->Operation ();

  // 组合对象添加组合对象
  pRoot->Add (pCom);

  // 执行组合对象 Operation 操作
  pRoot->Operation ();


  // 后续有一系列的删除对象的操作
  
  return 0;
}

