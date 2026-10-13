#include<iostream>
#include<string>
using namespace std;
 int main(){
  // Variables 
 int segundos;
 int horas;
 int minutos; 
 int segundosRestantes;
 
 cout<<"===SEGUNDOS A HORAS, MINUTOS Y SEGUNDOS===\n";
 
 cout<<"Ingrese la cantidad de segundos\n";
 cin>>segundos;
 
 if(segundos < 0){
    cout<<"ERROR, el valor debe ser positivo";
} else {horas = segundos / 3600;
 minutos = (segundos / 3600) % 60;
 segundosRestantes = segundos % 60;
 
 cout<<segundos<<" segundos equivalen a "<<horas<<" hora(s) "<<minutos<<" minuto(s) y "<<segundosRestantes<<" segundos\n";
}
    


}