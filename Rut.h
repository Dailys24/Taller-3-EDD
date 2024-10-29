#ifndef RUT_H
#define RUT_H

#include <iostream>

using namespace std;

//Clase rut
class Rut
{
    
  public:
    Rut();
        
    Rut(int,string);
    Rut(const Rut& aux);
        
    void Setnum(int val);
    int Getnum();
        
    void Setdv(string val);
    string Getdv();
        
    void mostrar();
        
        
  private:
    int num;
    string dv;

};

#endif // RUT_H
