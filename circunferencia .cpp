#include <iostream>
using namespace std;
 int main () {
  
  float const pi = 3.1416;
  float perimetro , radio;

cout << "ingres el perímetro" <<endl<<endl;  
cin >> perimetro;

radio = perimetro / (2*pi);


cout << "resultado: " << radio << endl;
 
 system("pause");
 
 return 0 ;
 
 }