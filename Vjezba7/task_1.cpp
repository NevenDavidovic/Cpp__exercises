/* Tijek zadatka:
1. Preopteretite slijedeæe operatore za klasu Razlomak:
I. + ovaj operator zbraja dva razlomka (npr 1/4 + 2/3)
II. -= ovaj operator umanjuje prvi razlomak za vrijednost drugog
III. << ovaj razlomak ispisuje razlomak (npr 5/7)
IV. ++ ovo je prefiksni operator koji uveæava vrijednost razlomka za 1 (npr
++2/3) V. < ovaj operator usporeðuje da li je prvi razlomak manji od drugog VI.
Napišite main funkciju u kojoj trebate demonstrirati rad svih operatora */

#include <iostream>
using namespace std;

class Razlomak {
  int m_brojnik;
  int m_nazivnik;

public:
  Razlomak() : m_brojnik(0), m_nazivnik(1) {}
  Razlomak(int brojnik, int nazivnik = 1) {
    m_brojnik = brojnik;
    m_nazivnik = nazivnik;
  }
  Razlomak operator+(Razlomak &b) {
    Razlomak z;
    z.m_nazivnik = m_nazivnik * b.m_nazivnik;
    z.m_brojnik = (z.m_nazivnik / m_nazivnik * m_brojnik) +
                  z.m_nazivnik / b.m_nazivnik * b.m_brojnik;
    return z;
  }

Razlomak  operator-=(Razlomak &b){
   Razlomak z;
  z.m_nazivnik = m_nazivnik * b.m_nazivnik;
    z.m_brojnik = (z.m_nazivnik / m_nazivnik * m_brojnik) -
                  z.m_nazivnik / b.m_nazivnik * b.m_brojnik;
return z;
};

  void ispis() { cout << m_brojnik << "/" << m_nazivnik << endl; }
friend ostream &operator<<(ostream &ispis,Razlomak &k);

Razlomak operator++(int){
  this->m_brojnik=(1*this->m_brojnik)+(this->m_nazivnik*1);
  Razlomak rez(this->m_brojnik,this->m_nazivnik);
  return rez ;
}


};

//djeluje kao ispis strukture
ostream &operator<<(ostream &ispis,Razlomak &k){
  ispis<<k.m_brojnik<<"/"<<k.m_nazivnik<<endl;
  return ispis;
}


int main() {
  Razlomak a(1, 2), b(5, 3), c,d(1,1),e;
//zbrajanje
  //c = a + b;
  //c.ispis();
//oduzimannje
  //c=d.operator-=(a);
  //c.ispis();
  a++;
  cout<<a;
  cout<<a;
  //cout<<d;
  //cout<<a<<endl;

  
}
