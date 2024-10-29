/*
    TALLER 3 EDD 
    MIEMBROS:       Josue Oliveros Berrios
                    Angelo Gonzalez Lobo
    FECHA:          domingo 14 de mayo 2023
    SECCION:        411
    PROFESOR:       MAURO ALEX CASTILLO VALDES
    LINK AL VDEO:   
 */

//Biblioteca
#include <iostream>
#include <string>

//Clases que ultilizaremos
#include "Licencia.h"
#include "Funciones.h"
#include "Direccion.h"
#include "Fecha.h"
#include "Rut.h"
#include "Stack.h"
#include "Cola.h"
#include "Heap.h"

using namespace std;
//Funcion main
int main() 
{
  Cola <Licencia> C;
  Stack <Licencia> LA;
  Stack <Licencia> LB;
  Stack <Licencia> LC;
  
  int op;
  int indice=0;
  string licencias ="Licencias.txt";

  ArchivoaCola(licencias,C,indice,LA,LB,LC);
  MostrarColaLicencia(C);
  //Do While
  do{
    
    //Menu del prograna
    cout<<"****************************************************************************************"<<endl;
    cout << "\n-----Base de datos de Licencias Municipalidad de Pelotillehue-----\n"<<endl;
    cout<<"\n------------- MENU -------------"<<endl<<endl;
    cout << "\n\u27a4 [1] Mostrar los datos de la persona con menor edad y que posea Licencia Tipo A "<<endl;
    cout << "\n\u27a4 [2] Mostrar licencias de Tipo B en base a la comuna y en orden ascendente "<<endl;
    cout << "\n\u27a4 [3] Mostrar Nombres de las mujeres con Licencia de tipo C  "<<endl;
    cout << "\n\u27a4 [4] Mostrar el Nombre y RUT de las personas que posean entre [25-35 años]  "<<endl;
    cout << "\n\u27a4 [5] Terminar"<<endl;
    cout<<"\n****************************************************************************************"<<endl;
    cout << "\nIngrese una operacion: ";
    cin >> op;
        
    if(op > 5)
    cout << "\n*** Operacion invalida. Porfavor digite nuevamente ***\n"<<endl;
        
    switch(op){
      
      case 1: //Caso Mostrar los datos de la persona con menor edad y que posea Licencia Tipo A
        
        cout <<"------------------------------------------------------------------------------------ "<<endl;
        cout <<"Los datos de la persona cuya licencia del tipo A que tenga menor edad es: "<<endl<<endl;
        MenorEdad(LA);
        cout <<"------------------------------------------------------------------------------------ "<<endl;
        
      break;
      
      case 2: //Caso Mostrar licencias de Tipo B en base a la comuna y en orden ascendente
        cout <<"------------------------------------------------------------------------------------ "<<endl;
        cout <<"Las licencias de tipo B ordenadas en forma ascendente por comunas son: "<<endl<<endl; 
        OrdenarComunas(LB);
        cout <<"------------------------------------------------------------------------------------ "<<endl;
      break;
      
      case 3: //Caso Mostrar Nombres de las mujeres con Licencia de tipo C
        cout <<"------------------------------------------------------------------------------------ "<<endl;
        cout <<"Mujeres que posean licencias de tipo C son: "<<endl<<endl;
        OrdenarMujeres(LC);
        cout <<"------------------------------------------------------------------------------------ "<<endl;
      break;
      
      case 4: //Caso Mostrar el Nombre y RUT de las personas que posean entre [23-35 años]
        cout <<"------------------------------------------------------------------------------------ "<<endl;
        cout <<"Licencias que cumplan edad en el rango [25-35 años] son: "<<endl<<endl;
        Consolidado(LA, LC);
        cout <<"------------------------------------------------------------------------------------ "<<endl;
      break;
      
      case 5: //Caso Terminar el programa
        cout << "\n****Gracias por utilizar****"<<endl;
      break;
    }
    
    
    
  }while(op!=5);
}
