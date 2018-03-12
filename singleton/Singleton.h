//
// Created by 陈国威 on 2018/3/11.
//

#ifndef DESIGN_PATTERNS_SINGLETON_H
#define DESIGN_PATTERNS_SINGLETON_H

class Singleton {

 private:
  static Singleton* pInstance;	// 静态成员，保存对象的唯一实现
  Singleton();	//私有化构造函数，使其无法再类外部实例化

 public:
  static Singleton* Instance();

  static void Destroy();

};

#endif //DESIGN_PATTERNS_SINGLETON_H
