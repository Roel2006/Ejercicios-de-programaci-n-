#include <iostream>

int main () {
   
     double temp;
     char op;

std::cout << "***** Convercion de temperatura *****\n";    
std::cout << "F = Fahrenheit\n";
std::cout << "C = Celsius\n";
std::cout << "a que unidad te gustaría convertir? ";
std::cin >> op;

if(op == 'F' || op == 'f') {
        std::cout << "ingrese la temperatura en celsius :";
        std::cin >> temp;
        
        temp = 1.8 * temp + 32;
        std::cout << "la temperatura es" << temp <<"grado Fahrenheit\n";
}   
       else if (op == 'C' || op == 'c') {
       std::cout << "ingrese la temperatura en Fahrenheit: ";  
       std::cin >> temp;  
       
       temp = (temp - 32) / 1.8;
        std::cout << "la temperatura es" << temp <<"grado Celsius\n";
 }      
       
       else {
            std::cout << "por favor , ingrese solo 'c' o 'f' \n ";
}
       
std::cout << "*************************************";

return 0;
}