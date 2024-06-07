#include <iostream>
using namespace std;
float a , p , imc;
int main(){

  cout << "###CALCULADORA DE IMC###";
  
  cout << "\n\n ingrese tu peso (kg): ";
  cin >> p;
  
  cout << "\n ingrese tu altura (mts): ";
  cin >> a;
  
  imc = p / (a*a);
  
  cout << "tu resultado es: " << imc;
  

 return 0 ;
 
 }