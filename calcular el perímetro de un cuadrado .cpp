#include <iostream>
using namespace std;
int main () {

float lado , perímetro;
   cout << "ingrese unos de los lados del cuadrado: ";
   cin >> lado;
   
   perímetro = 4 * lado;
   perímetro = lado + lado + lado + lado;
   cout << "el perímetro del cuadrado es: " << perímetro;

return 0;
}
