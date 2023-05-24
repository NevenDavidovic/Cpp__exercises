#include "pravokutnik.h"
#include "stack.h"
#include <iostream>

using namespace std;

void zamjeniVoid(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
  cout << "a= " << a << ", b= " << b << endl;
}

void zamjeniAdresa(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  cout << "a i b brojevi su zamijenili mjesta " << endl;
}
void zamjeniPointer(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
  cout << "Zamijenjeno uz pomoć dereferenciranja" << endl;
}
/*ZADATAK BR.1-> zamijeni*/
int main() {
  int a = 1;
  int b = 2;
  cout << "_________________________________________________________" << endl;
  cout << "Zadatak 1. " << endl;
  // ispis a i b prije zamjene
  cout << "Ispis a i b prije zamjene:" << endl;
  cout << "a= " << a << ", b= " << b << endl;

  cout << endl; // za bolje formatiranje u konzoli

  // poziv funkcije zamjeniVoid koja samo ispisuje ali ne mijenja varijable
  cout << "Poziv funkcije zamjeniVoid:" << endl;
  zamjeniVoid(a, b);
  cout << endl; // za bolje formatiranje u konzoli

  // poziv funkcije zamjeniAdresa
  zamjeniAdresa(a, b);
  cout << "Ispis a i b poslije zamjene:" << endl;
  cout << "a= " << a << ", b= " << b << endl;
  cout << endl;

  // poziv funkcije zamjeniPointer
  zamjeniPointer(&a, &b);
  cout << "Ispis a i b poslije zamjene->  Pointer dereferenciranje:" << endl;
  cout << "a= " << a << ", b= " << b << endl;
  cout << "_________________________________________________________" << endl;
  cout << endl;

  /*ZADATAK BR: 2-> HEADER FILES*/
  pravokutnik P = {2, 4};
  cout << "Zadatak 2. " << endl;
  cout << "Izračunavanje površine pravokutnika" << endl;
  cout << "P= " << povrsina(P) << endl; // vraca povrsinu pravokutnika
  cout << endl;
  povecaj_za(P, 3); // povecava stranice pravokutnika za 3

  cout << "Nove vrijednosti su: " << P.a << "|" << P.b << endl;
  cout << endl;

  smanji_za(P, 2); // smanjuje stranice pravokutnika za 2

  cout << "Nove vrijednosti su: " << P.a << "|" << P.b << endl;
  cout << endl;
  ispisi_pravokutnik(P);

  cout << "_________________________________________________________" << endl;
  cout << "Zadatak 3. stack" << endl;
  stack S;
  makeNull(S);
  cout << "Ubacivanje elemenata 3 i 5" << endl;
  push(1, S);
  push(2, S);
  push(3, S);
  push(4, S);
  push(5, S);
  push(6, S);
  cout << "Provjera funkcije top" << endl;
  int elS = top(S);
  cout << elS << endl;
  
  cout << "Provjera pop +top" << endl;
  pop(S);
  elS = top(S);
  cout << elS << endl;
printS(S);
  system("pause");
  return 0;
}

// 1: ZADATAK
/* Napisati funkciju koja mijenja dva broja */

// 2.Zadatak

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
}


*/

/*3. ZADATAK
napišite datoteku stack.h, da slijedeći kod radi:
#include "stack.h"
int main( void ){

makeNull( S );
push( S, 3 );
push(S, 5 );
int a = top( S );
cout<<a<<endl;
pop( S );
a = top( S );
cout<<a<<endl;
return 0;
}


*/