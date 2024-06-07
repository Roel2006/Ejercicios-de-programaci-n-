#include <iostream>
using namespace std;
int main(){

  int segentra,horas,min,seg;
  
  cout << "ingrese los segundos: ";
  cin >> segentra;
  
  horas = (int)(segentra/3600);
  min = (int)(segentra-horas*3600)/60;
  seg = segentra - (horas*3600+min*60);
  
  cout << "horas: " << horas <<endl;
  cout << "minutos: " << min <<endl;
  cout << "segundos: " <<seg <<endl;




 return 0 ;
 
 }