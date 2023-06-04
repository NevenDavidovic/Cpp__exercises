/*Zadatak 3

Definirajte klasu Kvadratna koja služi za rješavanje kvadratne jednadžbe i ima
sljedeæe atribute:

a) PUBLIC:

Koeficijente a, b, c te rezultate x1 i x2 tipa double.
Metodu calculate koja pomoæu koeficijenata izraèunava kvadratnu jednadžbu i
rješenja zapisuje u x1 i x2 atribute. Metoda ne prima nikakve argumente veæ sve
što joj treba za izraèun uzima iz atributa klase. Metoda ne vraæa nikakvu
vrijednost (void). b) PRIVATE:

Metodu diskriminanta koja izraèunava diskriminantu kvadratne jednadžbe. Metoda
ne prima nikakve argumente veæ sve što joj treba za izraèun uzima iz atributa
klase. Metoda vraæa izraèun tipa double.

Nadopunite glavni program s funkcijom koja od korisnika traži unos koeficijenata
a, b i c te, pomoæu klase Kvadratna, izraèunava i ispisuje rezultat kvadratne
jednadžbe.

Koeficijenti a, b, i c koje je korisnik unio trebaju biti postavljeni kao
atributi klase. Nakon toga pomoæu metode calculate, a interno i metode
diskriminanta, vrši se izraèun i u konaènici rezultati moraju biti u atributima
x1 i x2 koje ispisujete kao rješenje.

 Diskriminanta je izraz ispod korijena
(b2-4*a*c).*/

#include <cmath>
#include <iostream>
using namespace std;

class kvadratna {
public:
  double a, b, c, x1, x2;

  void set(double _a, double _b, double _c) {
    this->a = _a;
    this->b = _b;
    this->c = _c;
    
  }

  void calculate() {
    double diskrimin = diskriminanta();
    double r=b*b-4*a*c;
    if ( r< 0)
      cout << "Cant calculate sqrt of a negative num -> sqrt("<<b<<"^2 - "<<a<<"*"<<c << ")="<<r<<endl;
    else {
      x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
      x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

      cout << "x1= " << this->x1 << endl;
      cout << "x2= " << this->x2 << endl;
      cout << "Diskriminanta= " << diskrimin << endl;
    }
  }

private:
  double diskriminanta() {
    double D;
    D = sqrt(pow(b, 2) - 4 * a * c);

    return D;
  }
};

int main() {
  kvadratna f;
  double a, b, c;
  

  cout << "Unesi a: " << endl;
  cin >> a;
  cout << "Unesi b: " << endl;
  cin >> b;
  cout << "Unesi c: " << endl;
  cin >> c;
  cout << "D=" << sqrt(pow(b, 2) - 4 * a * c) << endl;
  f.set(a, b, c);
  f.calculate();

  return 0;
}

