#include "Rut.h"
#include "Fecha.h"
#include "Direccion.h"
#include "Stack.h"
#include "Licencia.h"
#include "Cola.h"
#include "Heap.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

vector <string> Split(string lineaseparada, char delimitador){
  vector<string> vector_interno;      
  stringstream linea(lineaseparada);
  string parteDelString;

  while(getline(linea, parteDelString, delimitador))
    vector_interno.push_back(parteDelString);
    
    return vector_interno; 
}

void FiltrarStack(Cola <Licencia> C, Stack <Licencia> &LA,Stack <Licencia> &LB,Stack <Licencia> &LC);

void ArchivoaCola(string licencias,Cola <Licencia> &C, int indice,Stack <Licencia> &LA,Stack <Licencia> &LB,Stack <Licencia> &LC){
  
  ifstream archivo;
  string LineaObtenida;
  Licencia L1;
  Stack<Licencia> L;
  Rut R;
  Direccion D;
  Fecha F;
  
  archivo.open("Licencias.txt",ios::in);    //Abre el archivo en modo lectura 
  
  if (archivo.fail()){
    cout<< "***El archivo no se pudo abrir***"<< endl;
    exit(1);
  }
  
  while(getline(archivo,licencias,'\n')){
    if(indice==0){  //condicion para que se salte la primera linea de texto
      indice++;
      continue;
    }
  
    //Asignar el dato respectivo de licencias.txt a la clase licencia
    vector<string> Data = Split(licencias,';'); 

    L1.Setid(atoi(Data[0].c_str()));

    R.Setnum(atoi(Data[1].c_str()));
    R.Setdv(Data[2]);
    L1.Setrut(R);

    L1.Setnombre(Data[3]);
    L1.Setpaterno(Data[4]);
    L1.Setmaterno(Data[5]);

    F.Setdd(atoi(Data[6].c_str()));
    F.Setmm(atoi(Data[7].c_str()));
    F.Setaa(atoi(Data[8].c_str()));
    L1.Setfnac(F);

    L1.Setsexo(atoi(Data[9].c_str()));
    
    D.Setdir(Data[10]);
    D.Setncasa(atoi(Data[11].c_str()));
    D.Setcom(Data[12]);
    L1.Setd(D);

    L1.SetposeeLicencia(atoi(Data[13].c_str()));
    L1.SettipoLicencia(Data[14][0]);
    L1.Setanteojos(atoi(Data[15].c_str()));
    
    C.agregar(L1);
    
    indice++;
  }
  
  FiltrarStack(C,LA,LB,LC);

  archivo.close();
}

void MostrarColaLicencia(Cola <Licencia> C){

  while(!C.vacio()){
    
    Licencia L=C.front();
    L.mostrar();
    C.extraer();
    
  }
  
}


void FiltrarStack(Cola <Licencia> C, Stack <Licencia> &LA,Stack <Licencia> &LB, Stack <Licencia> &LC){
  Licencia L;

  while(!C.vacio()){
    
    L=C.extraer();

    if(L.GettipoLicencia()=='A'){
      LA.push(L);
    }
      
    if(L.GettipoLicencia()=='B'){
      LB.push(L);
    }

    if(L.GettipoLicencia()=='C'){
      LC.push(L);
    }
  }
}

void MenorEdad(Stack<Licencia> LA) {
  
  Licencia L1;
  Heap<Licencia,int> A;
  Licencia ultimoDato;

  while (!LA.empty()) {
    L1 = LA.pop();
    Fecha fechaNacimiento = L1.Getfnac();
    A.agregar(L1,fechaNacimiento.Getaa());
  }

  while (!A.vacia()) {
    ultimoDato=A.extraer();
  }
  ultimoDato.mostrar();
}

void OrdenarComunas(Stack<Licencia> LB){
  
  Licencia L1;
  Heap<Licencia,string> B;
  Licencia TipoB;
  
  while(!LB.empty()){
    L1=LB.pop();
    string C =L1.Getd().Getcom();
    B.agregar(L1,C);
  }
  
  while(!B.vacia()){
    TipoB=B.extraer();
    TipoB.mostrar();
  }
  
}

void OrdenarMujeres(Stack<Licencia> LC){ 

  Licencia L1;
  Heap<Licencia,int> M;
  Licencia TipoC;
  Licencia DatoMujer;
  
  Stack <Licencia> LC1;
  while(!LC.empty()){
    LC1.push(LC.pop());
  }
  
  while(!LC1.empty()){
    L1=LC1.pop();
    
    if(L1.Getsexo()==1){
      TipoC=LC1.pop();
      M.agregar(L1,TipoC.Getsexo());
    }

  }

  while(!M.vacia()){
    DatoMujer= M.extraer();
    DatoMujer.MostrarMujer();
  }
}

Licencia SepararLicencia(Stack<Licencia> L){
  Licencia LP;
    while(!L.empty()){
      LP=L.pop();
    }
  
  return LP;
}

void Consolidado(Stack<Licencia> LA, Stack<Licencia>LC){
  
  Cola<Licencia> C;
  Licencia L;
  string S;
  Rut R;
  
  while(!LA.empty()){
    L= LA.pop();
    
    if(2023- L.Getfnac().Getaa()>24 && 2023- L.Getfnac().Getaa()<36){     
      C.agregar(L);
    }
    else{
      LA.pop();
    }
    
  }

  while(!LC.empty()){
    
    L=LC.pop();
    
    if(2023- L.Getfnac().Getaa()>24 && 2023- L.Getfnac().Getaa()<36){
      C.agregar(L);
    }

    else{
      LC.pop();
    }
  }
 
  while(!C.vacio()){
    cout<<endl;
    L=C.extraer();
    L.MostrarRango(L);
    cout<<"\n";
  }
  
}
