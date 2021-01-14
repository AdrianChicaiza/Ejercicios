#include <iostream>
using namespace std;

void ingresar (int a[], int n);
void ordenar (int a[], int n);
void imprimir (int a[], int n);

int main()
{
                  //0,1,2,3,4//
    int arreglo[5];


    ingresar(arreglo, 5);
    cout<<endl;
    ordenar(arreglo, 5);
    cout<<endl;
    imprimir(arreglo, 5);
    cout<<endl;


    return 0;
}

void ingresar (int a[], int n)
{
  cout<<"Ingresa los elementos al arreglo:"<<endl;
  for (int i=0;i<n;i++)
  {
    cin>>a[i];
  }

}

void ordenar (int a[], int n)
{
  int aux;
  for (int i=0;i<n;i++)
   {
    for (int j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
      {
          aux=a[i];
          a[i]=a[j];
          a[j]=aux;
      }
    }

   }
}

void imprimir (int a[], int n)
{
  int i;
  for (int i=0;i<n;i++)
   {
       cout<<"|"<<a[i]<<"|";
   }
}
