#ifndef LICENCIA_H
#define LICENCIA_H

#include "Rut.h"
#include "Fecha.h"
#include "Direccion.h"
#include <iostream>
#include <string>

using namespace std;

class Licencia
{
    
  public://Metodos Publicos
    Licencia();
    Licencia(int,string,string,string,int,bool,char,bool);
    Licencia(const Licencia& aux);
        
    void Setid(int val);
    int Getid();
        
    void Setrut(Rut val);
    Rut Getrut();
        
    void Setnombre(string val);
    string Getnombre();
        
    void Setmaterno(string val);
    string Getmaterno();
        
    void Setpaterno(string val);
    string Getpaterno();
        
    void Setsexo(int val);
    int Getsexo();
        
    void Setfnac(Fecha val);
    Fecha Getfnac();
    
    void Setd(Direccion val);
    Direccion Getd();
        
    void SetposeeLicencia(bool val);
    bool GetposeeLicencia();
        
    void SettipoLicencia(char val);
    char GettipoLicencia();
        
    void Setanteojos(char val);
    char Getanteojos();
        
    void mostrar();
    void MostrarNombre();
    void MostrarMujer();
    void MostrarRango(Licencia L);

  private://atributos
    int id;
    Rut run;
    string nombre;
    string materno; 
    string paterno;
    Fecha fnac;
    int sexo;
    Direccion d;
    bool poseeLicencia;
    char tipoLicencia;
    int anteojos;
    
};

#endif //LICENCIA_H
