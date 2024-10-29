#ifndef HEAP_H
#define HEAP_H
#include <queue>

template <class T,class D>
class Heap {
public:
  Heap() {};
  virtual ~Heap() {};
 
  void agregar(T dato, D prioridad) {
    ParPrioridadDato par;
    par.first = prioridad;
    par.second= dato;
    h2.push(par);
  };
 
  T extraer(){
    ParPrioridadDato par = h2.top();
    h2.pop();
    return par.second;
  }
 
  bool vacia() {
    return h2.empty();
  }
 
  private:
    typedef std::pair<D, T> ParPrioridadDato; // Prioridad, orden
 
    class ComparePrioridad {
    public:
      bool operator() (ParPrioridadDato a, ParPrioridadDato b) {
        return a.first > b.first;
      }
  };
  std::priority_queue<ParPrioridadDato, std::vector<ParPrioridadDato>, ComparePrioridad> h2;
};
 
#endif // HEAPTEMPLATE_H
