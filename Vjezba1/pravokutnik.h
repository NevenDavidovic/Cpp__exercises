#include <iostream>
using namespace std;

//TASK
/*
• Napišite datoteku pravokutnik.h strukture pravokutnik
• Kod mora biti takav da se donji klijentski program uspješno
kompajlira:
#include "pravokutnik.h"
int main()
{
pravokutnik P={2,4}; //kreira pravokutnik sa stranicama 2 i 4
cout<<povrsina(P)<<endl; //vraca povrsinu pravokutnika
povecaj_za(P,3); //povecava stranice pravokutnika za 3
smanji_za(P,2); //smanjuje stranice pravokutnika za 2
ispisi(P); //ispisuje sve podatke o pravokutniku
return 0;
}*/


struct pravokutnik{
  double a,b;
};
// izracunavanje povrsine
double povrsina(pravokutnik P){
  return P.a * P.b;
  }

void povecaj_za (pravokutnik &P,double b){
  P.a+=b;
  P.b+=b;
  cout<<"Povecanje za "<<b<<" izvrseno!"<<endl;
  
}

void smanji_za(pravokutnik &P, double b){
  P.a-=b;
  P.b-=b;
  cout<<"Smanjenje za "<<b<<" izvrseno!"<<endl;
}

void ispisi_pravokutnik(pravokutnik P){
  cout<<"Ispis svih osobina pravokutnika"<<endl;
  cout<<"Površina= "<<povrsina(P)<<" cm"<<endl;
  cout<<"Stranica a= "<<P.a<<" cm"<<endl;
  cout<<"Stranica b= "<<P.b<<" cm"<<endl;
  
  
}