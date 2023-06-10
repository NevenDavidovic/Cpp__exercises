/*Zadatak 1

Deklarirana je klasa Duzina, klasa Cetverokut i izvedene klase Pravokutnik i Kvadrat. Klasa Pravokutnik sadr�i dva objekta klase Duzina. Definirajte odnose naslje�ivanja izme�u klase Cetverokut i klasa Pravokutnik i Kvadrat (pri �emu bar jedno naslje�ivanje mora biti tipa protected i bar jedno tipa private), te rije�ite redom sljede�e zadatke:



1. Implementirajte konstruktore za sve klase (sa parametrima i bez njih).

2. Definirajte metode za ra�unanje opsega i povr�ine za klase Pravokutnik i Kvadrat.

3. U main funkciji kreirajte po jedan objekt klase Pravokutnik i Kvadrat i izra�unajte im povr�ine i opsege. */

#include <iostream>
using namespace std;

class Duzina{
public:
float x;

float getX(){
  return x;
}
Duzina(){}
Duzina(float xa): x(xa){}


};
class Cetverokut{};

class Pravokutnik: private Duzina,public Cetverokut{
Duzina a,b;
public:
Pravokutnik(){}
Pravokutnik(float a,float b):b(b),a(a){}

float povrsina(){
  float p=a.x*b.x;
  return p;
}
float opseg(){
  float o=2*(a.x+b.x);
  return o;
}

};
class Kvadrat: protected Duzina,public Cetverokut{
public:
Duzina kv;
Kvadrat(){}
Kvadrat(float c):kv(c){}

float povrsina(){
  float p=kv.x;
    return p;
}
float opseg(){
  
 float o =4*kv.x;
return o;
}



};


int main(){

Pravokutnik p(2,3);
Kvadrat k(3);

cout<<"Povrsina pravokutnika je: "<<p.povrsina()<<endl;
cout<<"Povrsina kvadrata je: "<<k.povrsina()<<endl; 
cout<<"Opseg pravokutnika je: "<<p.opseg()<<endl;
  cout<<"Opseg kvadrata je: "<<k.opseg()<<endl;

  system("pause");
  return 0;
}
