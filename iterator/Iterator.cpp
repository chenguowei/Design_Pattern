//
// Created by 陈国威 on 2018/3/28.
//

#include <iostream>
#include <vector>


using namespace std;

template<class Item>
class Iterator
{
 public:
  virtual void first() = 0;
  virtual void next() = 0;
  virtual Item* currentItem() = 0;
  virtual bool isDone() = 0;
  virtual ~Iterator ()  {}

};

// 具体的 iterator
template <class Item>
class ConcreteAggregate;

template <class Item>
class ConcreteIterator : public Iterator<Item>
{
 public:
  ConcreteIterator(ConcreteAggregate<Item> *a) : aggr(a), cur(0)
  {

  }

  virtual void first()
  {
    cur = 0;
  }

  virtual void next()
  {
    if (cur < aggr->getLen())
      cur++;
  }

  virtual Item* currentItem()
  {
    if (cur < aggr->getLen())
      return &(*aggr)[cur];
    else
      return NULL;
  }

  virtual bool isDone()
  {
    return (cur>= aggr->getLen());
  }

 private:
  ConcreteAggregate<Item>* aggr;
  int cur;

};


template <class Item>
class Aggregate
{
 public:
  virtual Iterator<Item>* createIterator() = 0;
  virtual ~Aggregate (){ }

};


template <class Item>
class ConcreteAggregate : public Aggregate<Item>
{
 public:
  ConcreteAggregate()
  {
    data.push_back (1);
    data.push_back (2);
    data.push_back (3);
  }

  virtual Iterator<Item>* createIterator()
  {
    return new ConcreteIterator<Item>(this);
  }

  Item&operator[](int index)
  {
    return data[index];
  }

  int getLen()
  {
    return data.size();
  }
 private:
  vector<Item> data;
};

int main()
{
  Aggregate<int >* aggr = new ConcreteAggregate<int >();
  Iterator<int >* it = aggr->createIterator ();

  for (it->first (); !it->isDone () ; it->next ())
    {
      cout << *(it->currentItem()) << endl;
    }

  delete it;
  delete aggr;
  return 0;
}


