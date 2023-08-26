#include <iostream>
using namespace std;
int main(){
   int edades[]= {11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
   float altura[]={1.50,1.52,1.55,1.58,1.60,1.62,1.64,1.67,1.70,1.73,1.75,1.78,1.80,1.82,1.85};
   int multiplos[]={3,6,9,12,15,18,21,24,27,30,33,36,39,42,45};
   int x,numero,m,mitad,primero,ultimo;
   primero=0;
   ultimo=14;
   x=0;
while (true)
{
    /* code */


cout << "¿que dato quiere encontrar? \n";
cout << "1:edad\n";
cout << "2:altura \n";
cout << "3:multiplos \n";
cin>>numero;
switch (numero)
{
case 1:
cout<<"ingrese la edad que busca\n";
cin>>m;
while (primero <= ultimo && x==0)
{
    mitad = (primero + ultimo)/2;

    if (m== edades[mitad])
    x =1;
    if (m < edades[mitad])
    ultimo = mitad-1;
    if (m== edades[mitad])
    primero =mitad+1;

}
  if (x==1)  
  cout<<"el numero se encuentra en el vector\n";
 else
    cout<<"el numero no esta en el vector\n";
 break;
case 2:
cout<<"ingrese la altura que busca\n";
cin>>m;
while (primero <= ultimo && x==0)
{
    mitad = (primero + ultimo)/2;

    if (m== altura[mitad])
    x =1;
    if (m < altura[mitad])
    ultimo = mitad-1;
    if (m== altura[mitad])
    primero =mitad+1;

}
  if (x==1)  
  cout<<"la altura  se encuentra en el vector\n";
 else
    cout<<"la altura no esta en el vector\n";
break;

case 3:
cout<<"ingrese el multiplo de 5 que busca\n";
cin>>m;
while (primero <= ultimo && x==0)
{
    mitad = (primero + ultimo)/2;

    if (m== multiplos[mitad])
    x =1;
    if (m < multiplos[mitad])
    ultimo = mitad-1;
    if (m== multiplos[mitad])
    primero =mitad+1;

}
  if (x==1)  
  cout<<" se encuentra en el vector\n";
 else
    cout<<"el multiplo no esta en el vector\n";
break;


default:
cout << "Opción no válida. Por favor, selecciona una opción válida.";

}

}
    
}



