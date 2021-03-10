#include <iostream>
#include <ctime>
#include<fstream>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
using namespace std;
using namespace ejerciciouno;
using namespace ejerciciodos;
using namespace ejerciciotres;
int pro(int n);
int main() {
  int op;
  do{
    cout<<"MENU"<<endl;
    cout<<"1. Numeros randoms en un arreglo"<<endl;
    cout<<"2. Ordenamiento de un vector y busqueda"<<endl;
    cout<<"3. SUPERMAXI"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Escoja una opcion: ";
    cin>>op;
    switch (op)
    {
      case 1:
      {
        cout<<"Numeros randoms en un arreglo"<<endl;
        int cant;
        srand(time(0));
        cout<<"Ingrese el numero de elementos en el arreglo: ";
        cin>>cant;
        nelementos(cant);
        tamnum(cant);
        break;
      }
      case 2:
      {
        cout<<"Ordenamiento de un vector y busqueda"<<endl;
        ofstream archivo;
        archivo.open("Problema 2.txt",ios::app);
        int numeros[100],n,i,nb;
      	cout<<"Digite el numero de elementos: ";
       	cin>>n;
        archivo<<"tamaño de vector: "<<n<<endl;

    for(int i=0; i< n; i++)
    {
       cout<<"Digite un numero: ";
		cin>>numeros[i];

    }
    cout<<endl;
    for(int i=0; i< n; i++)
    {
        cout<<"|"<<numeros[i]<<"|";

    }
    dividir(numeros,0,n);
    cout<<endl;
    cout<<endl;
    for(int i=0; i< n; i++)
    {
        cout<<"|"<<numeros[i]<<"|";
        archivo<<"Elementos: "<<numeros[i]<<endl;
    }
    cout<<"\ningrese un numero a buscar: ";
    cin>>nb;
    archivo<<"numero a buscar: "<<nb<< "\n";
    if(busqueda(numeros, n, nb)==-1)
    {
        cout<<"NO EXISTE EL ELEMENTO";
        archivo<<"NO EXISTE EL ELEMENTO";
    }
    else
    {
        cout<<"ELEMENTO ESTA EN LA POSICIÓN: "<<busqueda(numeros, n, nb);
        archivo<<"ELEMENTO ESTA EN LA POSICIÓN: "<<busqueda(numeros, n, nb);
    }
    archivo.close();
    return 0;
        break;
      }
      case 3:
      {
        cout<<"SUPERMAXI"<<endl;
        supermercado();
        break;
      }
      case 4:
      {
        cout<<"ADIOS"<<endl;
        break;
      }
    }
  }while(op!=4);
}


