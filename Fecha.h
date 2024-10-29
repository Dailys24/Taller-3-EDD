#ifndef FECHA_H
#define FECHA_H
#include<iostream>

using namespace std;

class Fecha{
	
	public:
		
		Fecha();
		Fecha(int,int,int);
		
		void Setdd(int val);
		void Setmm(int val);
		void Setaa(int val);
		
		int Getdd();
		int Getmm();
		int Getaa();
		int calcularEdad();
		void mostrar();
		
	private:
		int dd;
		int mm;
		int aa;
		
};

#endif
