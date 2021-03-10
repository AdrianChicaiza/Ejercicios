#include  <iostream>
using namespace std;
namespace ejerciciotres
{
  void supermercado(){
char nombre[40];
char ciudad[40];
int tele,num;
int cant[40];
char cod[20];
float suma;
float a=0;
float suma2;
char nombre2[40];
char c[30];
string nombre3[40];
string estado[40];
void supermercado();
float precio[40];
ofstream archivo;
archivo.open("SUPERMERCADO.txt",ios::out);
do{
cout<<"---DATOS DEL PROVEEDOR---\n";
cout<<"Ingrese el codigo:";
cin>>cod;
cout<<"ingrese el nombre:";
cin>>nombre;
cout<<"Ingrese la ciudad:";
cin>>ciudad;
cout<<"telefono:";
cin>>tele;
archivo<<"---DATOS DEL PROVEEDOR---\n";
archivo<<"CODIGO     NOMBRE         CIUDAD       TELEFONO\n";
archivo<<cod<<"\t\t\t"<<nombre<<"\t\t\t\t"<<ciudad<<"\t\t\t"<<tele;
cout<<"---Datos del producto---\n";
cout<<"Numero de productos:";
cin>>num;
for(int i=1;i<=num;i++){
cout<<"Nombre del "<<i<<" producto:";
cin>>nombre3[i];
cout<<"Precio:";
cin>>precio[i];
cout<<"cantidad:";
cin>>cant[i];
cout<<"Estado del producto:";
cin>>estado[i];
}
for(int j=1;j<=num;j++){
suma=suma+precio[j];
a=a+precio[j]*cant[j];
}
archivo<<"\n---DATOS DEL PRODUCTO---\n";
archivo<<"NOMBRE    PRECIO       CANTIDAD       ESTADO\n";
for(int i=1;i<=num;i++){
 archivo<<nombre3[i]<<"\t\t\t\t\t\t"<<precio[i]<<"\t\t\t\t\t\t"<<cant[i]<<"\t\t\t"<<estado[i]<<"\n";
}
cout<<"Precio total de los productos:"<<suma<<"\n";
cout<<"cantidad de productos:"<<num<<"\n";
cout<<"El valor total:"<<a<<"\n";
archivo<<"Precio total de los productos:"<<precio[1]<<"\n";
archivo<<"Eantidad de productos:"<<num<<"\n";
archivo<<"El valor total:"<<a<<"\n";
cout<<"Ingrese * para finalizar:";
scanf("%s",c);
archivo.close();
}
while('c'=='*');
}
}
