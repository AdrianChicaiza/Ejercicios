#include <iostream>
#include <fstream>
using namespace std;
int main() {
  float L,PG,TG,GA;
  ofstream archivo;
  archivo.open("ganancia.txt",ios::out);
  archivo<<"GANANACIA DE LECHE"<<endl;
  cout<<"Venta de LECHE"<<endl;
  cout<<"Ingrese la cantidad de litros: ";
  cin>>L;
  archivo<<"LITROS: "<<L<<endl;
  cout<<"Precio del galon: ";
  cin>>PG;
  archivo<<"PRECIO: "<<PG<<" $"<<endl;
  TG=(L/3.785);
  GA=PG*TG;
  cout<<"La ganacia obtenida: "<<GA<<" $"<<endl;
  archivo<<"GANANCIA TOTAL: "<<GA<<" $"<<endl;
  archivo.close();
  }
