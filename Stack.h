#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <stack>
#include "Licencia.h"

using namespace std;

//Stack
template <class Tipo>
class Stack : private stack<Licencia> {
public:
  void push(Tipo t){
    stack<Licencia>::push(t);
  }
 
  Tipo pop(){
    Tipo temp = stack<Licencia>::top();
    stack<Licencia>::pop();
    return temp;
  }

  Tipo top()
{
  return stack<Tipo>::top();
}

  
 
  bool empty(){
    return stack<Tipo>::empty();
  }
};

#endif
