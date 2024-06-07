#include<iostream>

int main () {

char op;
double num1;
double num2;
double resultado;

std::cout << "##########CAALCULADORA##########\n";

std::cout << "ingrese (+-*/)";
std::cin >> op;

std::cout << "ingrese el numero #1:";
std::cin >> num1;  

std::cout << "ingrese el numero #2:";  
std::cin >> num2;


if(op == '+') { 
    resultado = num1 + num2;

std::cout << "el resultado es" <<resultado<<std::endl;


std::cout << "##############################";
}
 return 0 ; 
 
 }