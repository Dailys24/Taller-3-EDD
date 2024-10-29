#include "Direccion.h"
using namespace std;
Direccion::Direccion()
{
	this->dir = "NO";
	this->ncasa = 0;
	this->com = "NO";
}

Direccion::Direccion(string d, int n, string c)
{
	this->dir=d;
	this->ncasa=n;
	this->com=c;
}

//Set------------------

void Direccion::Setdir(const string& val) {
  dir = val;
}

void Direccion::Setncasa(int val){
	this->ncasa = val;
}

void Direccion::Setcom(string val){
	this->com = val;
}

//Get------------------

string Direccion::Getdir()
{
	return this->dir;
}

int Direccion::Getncasa()
{
  return this->ncasa;
}

string Direccion::Getcom()
{
  return this->com;
}

void Direccion::mostrar()
{
  cout << dir << " , " << ncasa << " , " << com;
}


void Direccion:: MostrarComuna(){
  cout << com;
}
