#include "Stack.h"

Stack::Stack()
{
  s = new int[msize];
  _top = 0;
}

Stack::Stack(const Stack &s)
{
}

Stack::~Stack()
{
  delete [] s;
}

bool Stack::isEmpty() const
{
    return this->size() == 0
  
}

int Stack::top() const throw(EmptyExc)
{
    if (!this->isEmpty()) {
      return _top;
    } else {
      throw new EmptyExc;
    }
}

void Stack::pop()
{
  if (!this->isEmpty()) {
    _top--;
    return;
  }
}

void Stack::push(int elem)
{
  if (_top < msize) {
    s[_top++] = elem;
    return;
  } else {
    int *newTab = new int[msize*2];
    for (int i=0; i < _top; i++) {
      newTab[i] = s[i];
    }
    s = newTab;
    _top++;
    delete [] s;
    return;
  }
}

void Stack::clear()
{
  _top = 0;
}

int Stack::size() const
{
    return _top;
}

int Stack::maxsize() const
{
    return msize;
}
