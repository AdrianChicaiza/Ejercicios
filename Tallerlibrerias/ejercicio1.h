#include  <iostream>
using namespace std;

namespace ejerciciouno
{
  void nelementos(int narr)
{
  ofstream archivo;
  archivo.open("Ejercicio1.txt", ios::app);
  archivo<<"Numero de elementos: "<<narr<<endl;
  int numeros[10],mayor=0;
  for(int i = 0; i < narr; i++)
     {
        numeros[i] = rand() % 100;
        numeros[i] = 1 + rand() % (99-1);
     }
     for(int i = 0; i < narr; i++)
     {
         cout<<"|"<< numeros[i]<<"|";
         archivo<<"|"<< numeros[i]<<"|";
     }
     cout<<endl;
     archivo<<endl;
     archivo.close();
}

void tamnum(int narr)
{
  ofstream archivo;
  archivo.open("Ejercicio1.txt", ios::app);
  int i,numeros[10],mayor=0,menor=0,cont=0,cont1=0;
     for(int i = 0; i < narr; i++)
     {
       if(numeros[i]>mayor)
       {
         mayor=numeros[i];
       }
     }
     menor=mayor;
for(int i = 0; i < narr; i++)
     {
      if(numeros[i]<menor)
       {
         menor=numeros[i];
       }
     }
     for(int i = 0; i < narr; i++)
     {
       if(numeros[i]>mayor)
       {
         numeros[i]=cont;
       }
     }
     cont++;
     for(int i = 0; i < narr; i++)
     {
      if(numeros[i]<menor)
       {
         numeros[i]=cont1;
       }
     }
     cont1++;
  cout<<"Mayor: "<< mayor<< " se repite "<<cont<< " veces" <<endl;
  cout<<"Menor: "<< menor<< " se repite "<<cont1<< " veces" <<endl;
  archivo<<"Mayor: "<< mayor<< " se repite "<<cont<< " veces" <<endl;
  archivo<<"Menor: "<< menor<< " se repite "<<cont1<< " veces" <<endl;
  archivo.close();
}

}
