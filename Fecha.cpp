#include "Fecha.h"
#include <ctime>
using namespace std;

Fecha::Fecha(){
	
	this->dd=0;
	this->mm=0;
	this->aa=0;
}

Fecha::Fecha(int dia, int mes, int anho)
{
	this->dd=dia;
	this->mm=mes;
	this->aa=anho;
}

//------------------

void Fecha::Setdd(int val){
	this->dd = val;
}

void Fecha::Setmm(int val){
	this->mm = val;
}

void Fecha::Setaa(int val){
	this->aa = val;
}

//------------------

int Fecha::Getdd()
{
	return this->dd;
}

int Fecha::Getmm()
{
    return this->mm;
}

int Fecha::Getaa()
{
    return this->aa;
}

int Fecha::calcularEdad() {
    // Obtener la fecha actual del sistema
    time_t fechahoy = time(0);
    tm* actual = localtime(&fechahoy);

    // Calcular la edad basada en el año actual y el año de nacimiento (aa)
    int edad = actual->tm_year + 1900 - aa;
    return edad;
}

void Fecha::mostrar()
{
  cout << "-Fecha de nacimiento : "<< dd << "/" << mm << "/" << aa << endl;
}
