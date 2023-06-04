/*Zadatak 3

Definirajte klasu Kvadratna koja slu�i za rje�avanje kvadratne jednad�be i ima
sljede�e atribute:

a) PUBLIC:

Koeficijente a, b, c te rezultate x1 i x2 tipa double.
Metodu calculate koja pomo�u koeficijenata izra�unava kvadratnu jednad�bu i
rje�enja zapisuje u x1 i x2 atribute. Metoda ne prima nikakve argumente ve� sve
�to joj treba za izra�un uzima iz atributa klase. Metoda ne vra�a nikakvu
vrijednost (void). b) PRIVATE:

Metodu diskriminanta koja izra�unava diskriminantu kvadratne jednad�be. Metoda
ne prima nikakve argumente ve� sve �to joj treba za izra�un uzima iz atributa
klase. Metoda vra�a izra�un tipa double.

Nadopunite glavni program s funkcijom koja od korisnika tra�i unos koeficijenata
a, b i c te, pomo�u klase Kvadratna, izra�unava i ispisuje rezultat kvadratne
jednad�be.

Koeficijenti a, b, i c koje je korisnik unio trebaju biti postavljeni kao
atributi klase. Nakon toga pomo�u metode calculate, a interno i metode
diskriminanta, vr�i se izra�un i u kona�nici rezultati moraju biti u atributima
x1 i x2 koje ispisujete kao rje�enje.

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

