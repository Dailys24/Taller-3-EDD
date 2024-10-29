#include "Rut.h"
using namespace std;

Rut::Rut()
{
  this->dv='0';
  this->num=00000000;
}
    
Rut::Rut(int n, string dig)
{
  this->num=n;
  this->dv=dig;
}
    
Rut::Rut(const Rut& aux)
{
  num = aux.num;
  dv = aux.dv;
}
    
void Rut::Setdv( string val )
{
  this->dv = val;
}

void Rut::Setnum( int val)
{
  this->num = val;
}

string Rut::Getdv()
{
  return this->dv;
}

int Rut::Getnum()
{
  return this->num;
}

void Rut::mostrar()
{
  cout << num << "-" << dv;
}
