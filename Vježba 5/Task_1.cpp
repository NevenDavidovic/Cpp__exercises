/*Zadatak 1

Zadatak se zasniva na dobivanju informacije o unesenoj IP adresi. Svaki ure�aj spojen na mre�u ima svoju javnu IP adresu s kojom ostvaruje komunikaciju s ostalim ure�ajima. IP adresa sastoji se od 4 okteta odvojenih to�kom (npr. 192.168.1.5). Isto tako postoje 5 razreda odnosno

klasa IP adresa gdje se za usporedbu gleda samo prvi oktet:

A � od 1 do 127
B � od 128 do 191
C � od 192 do 223
D � od 224 do 239
E � od 240 do 255
Za potrebe ovoga zadatka uzmimo da su sve ostale vrijednosti nevaljane (manje od 1 ili ve�e od 255).

Tijek zadatka:

1. Definirajte klasu IP koja ima sljede�e atribute:

a) PRIVATE:

i. Oktete a, b, c, d tipa integer.

b) PUBLIC:

ii. Metodu print koja pomo�u okteta ispi�e danu IP adresu u uobi�ajenom formatu gdje su okteti odvojeni to�kom. Metoda ne prima nikakve argumente ve� sve oktete dobiva iz same instance objekta. Metoda ne vra�a nikakav rezultat (void).

iii. Metodu postavi (seter) koja postavlja vrijednosti adrese

iiii. Metodu className koja vra�a jednu od 5 mogu�ih klasa IP adrese ili ��� ako je neispravna adresa. Metoda ne prima nikakve argumente ve� sve �to joj je potrebno uzima iz instance objekta. Metoda vra�a jedno slovo odnosno znak stoga je povratni tip metode char.

2. Napi�ite  main funkciju  koja �e od korisnika tra�iti unos IP adrese na na�in da korisnik mora unijeti �etiri okteta koji se pritom trebaju prenijeti u objekt klase IP. Funkcija zatim ispisuje IP adresu u njenom �itljivom obliku pomo�u metode print te ispisuje kojoj klasi pripada.*/

#include <iostream>
using namespace std;

class IP{
private:
int a,b,c,d;
public:
// SET FUNKCIJA

void set(){
  do{
  cout<<"Nijedan oktet ne smije biti jmanji od 1 i ve�i od 255"<<endl;
  cout<<"Upisi IP adresu"<<endl;
  cin>>a;
  cout<<a<<".";
  cin>>b;
  cout<<a<<"."<<b<<".";
  cin>>c;
  cout<<a<<"."<<b<<"."<<c<<".";
  cin>>d;
  cout<<a<<"."<<b<<"."<<c<<"."<<d;
cout<<endl;
  if(a>255 || a<1||b<1|| b>255||c<1||c>255||d<1||d>255)cout<<"Unijeli ste neispravnu Ip adresu: "<<a<<"."<<b<<"."<<c<<"."<<d <<endl;
  else cout<<"Ispravno ste unijeli IP adresu: "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
  }while(a>255 || a<1||b<1|| b>255||c<1||c>255||d<1||d>255);
}
// PRINT FUNKCIJA
void printIP(){
    cout<<"IP adresa= "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
}
//class NAme metoda
char className(){
    char c;
    if(a>0&&a<128) c='A';
    else if(a>127&&a<192)c='B';
    else if(a>191&&a<223) c='C';
    else if(a>223&&a< 240) c='D';
    else c='E';

    return c;
}

};


int main() {
    IP adresa;
    adresa.set();
    adresa.printIP();
    cout<<"Klasa IP adrese: "<<adresa.className();
  
}


