#include "Licencia.h" 
using namespace std;

//constructores
//sin parametros
Licencia::Licencia()
{
  id = 0;
  nombre = "NN";
  sexo = 0;
  poseeLicencia = false;
  tipoLicencia = '?';
  anteojos = false;
}
//parametros
Licencia::Licencia(int i,string n,string mat,string pat,int s,bool posee,char tipo,bool ant)
{
  id = i;
  nombre = n;
  materno = mat;
  paterno = pat;
  sexo = s;
  poseeLicencia = posee;
  tipoLicencia = tipo;
  anteojos = ant;
}
//copia
Licencia::Licencia(const Licencia& aux)
{
  //copy ctor
  id = aux.id;
  run = aux.run;
  nombre = aux.nombre;
  materno = aux.materno;
  paterno = aux.paterno;
  sexo = aux.sexo;
  fnac = aux.fnac;
  d = aux.d;
  poseeLicencia = aux.poseeLicencia;
  tipoLicencia = aux.tipoLicencia;
  anteojos = aux.anteojos;
}


//setters y getters 

void Licencia::Setid (int val)
{
  this->id=val;
}

int Licencia::Getid()
{
  return id;
}

void Licencia::Setrut (Rut val)
{
  this->run=val;
}

Rut Licencia::Getrut()
{
  return this->run;
}


void Licencia::Setnombre (string val)
{
  this->nombre=val;
}

string Licencia::Getnombre ()
{
  return this->nombre;
}


void Licencia::Setmaterno(string val)
{
  this->materno=val;
}

string Licencia::Getmaterno()
{
  return this->materno;
}


void Licencia::Setpaterno(string val)
{
  this->paterno=val;
}

string Licencia::Getpaterno()
{
  return this->paterno;
}

void Licencia::Setsexo (int val)
{
  this->sexo=val;
}

int Licencia::Getsexo()
{
  return this->sexo;
}

void Licencia::Setfnac(Fecha val)
{
  this->fnac = val;
}

Fecha Licencia::Getfnac() 
{
  return this->fnac; 
}

void Licencia::Setd(Direccion val)
{
  this->d = val;
}

Direccion Licencia::Getd()
{
  return this->d;
}

void Licencia::SetposeeLicencia(bool val)
{
  this->poseeLicencia=val;
}

bool Licencia::GetposeeLicencia()
{
  return this->poseeLicencia;
}


void Licencia::SettipoLicencia(char val)
{
  this->tipoLicencia=val;
}

char Licencia::GettipoLicencia()
{
  return this->tipoLicencia;
}

void Licencia::Setanteojos (char val)
{
  this->anteojos=val;
}

char Licencia::Getanteojos()
{
  return this->anteojos;
}

//Visualizadores

void Licencia::mostrar()
{
  cout << "ID:" << id << endl;
  cout << "-RUT:" ;
  run.mostrar();
  cout << endl;
  cout << "-NOMBRE: " << nombre << " " << paterno << " " << materno << " " << endl;
  fnac.mostrar();
  cout << "-SEXO : " << sexo << endl;
  cout << "-DIRECCION: ";
   d.mostrar();
  cout << endl;
  cout << "-POSEE LICENCIA: " << poseeLicencia << endl; 
  cout << "-TIPO DE LICENCIA: " << " "<< tipoLicencia << endl;
  cout <<"-ANTEOJOS: " << " " << anteojos << endl << endl;

}

void Licencia::MostrarNombre(){
  
  cout<<"-----------------------------------------------------------"<<endl;
  cout << "-NOMBRE: " << nombre << " " << paterno << " " << materno << " " << endl;
  cout << "-DIRECCION: ";
  d.MostrarComuna();
  cout<< "\n-TIPO DE LICENCIA: "<< tipoLicencia << endl;
  cout<<"-----------------------------------------------------------"<<endl;
  cout << endl;
  
}

void Licencia::MostrarMujer(){

  cout<<"-----------------------------------------------------------"<<endl;
  cout << "-NOMBRE: " << nombre << " " << paterno << " " << materno << " " << endl;
  cout << "-SEXO: " << sexo << endl;
  cout << "-TIPO DE LICENCIA: " << " "<< tipoLicencia << endl;
  cout<<"\n-----------------------------------------------------------"<<endl;
  cout<<endl;
  
}

void Licencia::MostrarRango(Licencia L){
  cout<<"-----------------------------------------------------------"<<endl;
  cout << "-NOMBRE: " << nombre << " " << paterno << " " << materno << " " << endl;
  cout << "-RUT: " ;
  run.mostrar();
  cout<<"\n-EDAD: "<<(2023 - L.Getfnac().Getaa());
  cout<<"\n-----------------------------------------------------------"<<endl;
  
}
