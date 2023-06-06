/*Zadatak 2

Definirajte klasu Krug koja se sastoji od radijusa (pokazivaè na float). Klasa treba sadržavati i slijedeæe elemente:

Defaultni konstruktor koji dinamièki alocira memoriju za radijus postavlja vrijednosti atributa na 0
Konstruktor sa argumentima koji dinamièki alocira memoriju za atribut i i postavlja vrijednost atributa na vrijednost argumenta funcije
Kopirni konstruktor
Destruktor koji alocira memoriju
set i get funkciju
funkciju print koja ispisuje vrijednost radijusa na ekran
U main funkciji treba demonstrirati rad svih elemenata klase.*/ 

#include <iostream>


using namespace std;

class Krug{
public:
float *radius;
Krug(){
  radius=new float(0);
}
Krug(float x){
  this->radius=new float(x);
}
Krug(const Krug &K){
  radius=new float(*K.radius);
}

~Krug(){
  delete radius;
}
void set(float x){
  *radius=x;
  
}
void ispisi(){
  cout<<*radius<<endl;
}

float get(){
  return *radius;
}
};


int main(){
  Krug k;
  k.ispisi();
//deklaracija
  Krug y(25.5),z(y);
  y.ispisi();
// kopirni konstruktor
  z.ispisi();
// idemo dalje
z.set(33);
  z.ispisi();

  float rez=z.get();
  cout<<"Rez"<<rez;
  return 0;
  system("PAUSE");
};
