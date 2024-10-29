#ifndef DIRECCION_H
#define DIRECCION_H
#include<iostream>
#include <string>

using namespace std;

class Direccion
{
	
	public:
		
		Direccion();
		Direccion(string,int,string);
		
		void Setdir(const string& val);
		void Setncasa(int val);
		void Setcom(string val);
		
		string Getdir();
		int Getncasa();
		string Getcom();
		
		void mostrar();
    void MostrarComuna();
		
	private:
		string dir;
		int ncasa;
		string com;
};

#endif
