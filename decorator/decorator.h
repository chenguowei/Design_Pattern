//
// Created by 陈国威 on 2018/3/18.
//

#ifndef DESIGN_PATTERNS_DECORATOR_H
#define DESIGN_PATTERNS_DECORATOR_H


// Component 抽象类，定义该类对象的接口
class Component
{
 public:
  virtual ~Component ();
  virtual void Operation()=0;

 protected:
  Component();
};

// ConcreteDecorator: 具体的 Component 对象，可以给该对象动态添加职责
class ConcreteComponent: public Component
{
 public:
  ConcreteComponent();
  ~ConcreteComponent () ();
  virtual void Operation();

};

// Decorator ： 装饰对象类，继承自 Compoent;
class Decorator: public  Component
{
 public:
  Decorator(Component* com);
  void SetComponent(Component *com);
  virtual ~Decorator ();
  virtual void Operation();

 protected:
  Component* _com;
};


// ConcreteDecorator 就是具体的装饰对象之一，起到给Component 添加职责的功能
class ConcreteDecoratorA : public Decorator
{
 public:
  ConcreteDecoratorA(Component* com);
  ~ConcreteDecoratorA ();
  virtual void Operation();
  void AddBehavorA();

};

// ConcreteDecorator 就是具体的装饰对象之一，起到给Component 添加职责的功能
class ConcreteDecoratorB : public Decorator
{
 public:
  ConcreteDecoratorB(Component* com);
  ~ConcreteDecoratorB ();
  virtual void Operation();
  void AddBehavorB();
};

// ConcreateDecoratorC 就是具体的装饰对象之三，起到给Component 添加职责的功能
class ConcreteDecoratorC : public Decorator
{
 public:
  ConcreteDecoratorC(Component* com);
  ~ConcreteDecoratorC ();
  virtual void Operation();
  void AddBehavorC();
};

// ConcreateDecoratorC 就是具体的装饰对象之四，起到给Component 添加职责的功能
class ConcreteDecoratorD: public Decorator
{
 public:
  ConcreteDecoratorD(Component* com);
  ~ConcreteDecoratorD ();
  virtual void Operation();
  void AddBehavorD();
};

//只添加一种装饰，则不用抽象出装饰基类
class DecoratorOnlyOne: public Component
{
 public:
  DecoratorOnlyOne(Component* com);
  ~DecoratorOnlyOne ();
  virtual void Operation();
  void AddBehavor();

 private:
  Component* _com;
};



// ConcreteDecorator 就是具体的装饰对象之一，起到给Component动态添加职责
#endif //DESIGN_PATTERNS_DECORATOR_H
