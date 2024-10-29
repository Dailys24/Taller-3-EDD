#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <queue>
#include "Licencia.h"
#include "Fecha.h"
#include "Rut.h"

using namespace std;


template <class Tipo>
class Cola : private std::queue<Tipo> {
public:
  Tipo extraer() {
    Tipo a = queue<Tipo>::front();
    queue<Tipo>::pop();
    return a;
  }

  void agregar(Tipo valor) {
    queue<Tipo>::push(valor);
  }
  
  Tipo front()
{
  return queue<Tipo>::front();
}
    
  bool vacio(){
    return queue<Tipo>::empty();
  }
};
#endif // COLA_H
