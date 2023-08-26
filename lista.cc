#include <iostream>
using namespace std;
int main(){

int cant,opt;
double promedio;
double suma=0;
double pass;
cout<<"cantidad de notas\n";
cin>>cant;
float* notas =new float[cant];

for (int i = 0; i < cant; i++)
{
    notas[i] = 0;
    cout<<"ingrese las notas\n";
    cin>>notas[i];

}

cout<<"1: hacer promedio\n";
cout<<"2: ver notas\n";
cout<<"3: pierde o no\n";
cin>>opt;
switch (opt)
{
case 1:
 for ( int i = 0; i < cant; i++)
 {
 suma+=notas[i];
promedio= suma/cant;

 }
cout<<"el promedio de las notas es:\n";
cout<< promedio<<endl;


 break;
 case 2:
 for ( int i = 0; i < cant; i++)
 {
    cout<<"notas:"<<notas[i]<<endl;
 }
 break;

 case 3:
 for ( int i = 0; i < cant; i++)
 {
 suma+=notas[i];
 pass= suma/cant;
 }
if (pass<3.0)
{
    cout<<"perdio\n";
}else{
    cout<<"paso\n";
}

 break;
 default:
 cout << "Opción no válida. Por favor, selecciona una opción válida.";


 }
 

}
