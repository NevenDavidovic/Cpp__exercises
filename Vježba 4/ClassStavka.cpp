#include <cmath>
#include <fstream>
#include <iostream>
#include <list>
#include <string.h>
using namespace std;

class stavka {
private:
  char naziv[100];
  int kolicina;

public:
  list<stavka> listaStavki;
  void dodavanjeStavke() {

    cout << "Unesi naziv" << endl;
    cin >> naziv;
    cout << "Unesi kolicinu" << endl;
    cin >> kolicina;

    listaStavki.push_back(*this);
  }
  void ispisStavki() {
    if (listaStavki.size() == 0)
      cout << "Lista je prazna" << endl;
    for (stavka x : listaStavki) {
      cout << x.naziv << x.kolicina << endl;
    }
  }

  void spremanjeListe() {
    fstream ispisi;
    ispisi.open("datoteka.dat", ios::binary | ios::out);
    list<stavka>::iterator i = listaStavki.begin();
    for (; i != listaStavki.end(); ++i) {
      ispisi.write((char *)i->naziv, sizeof(naziv));
      ispisi.write((char *)&i->kolicina, sizeof(kolicina));
    }
    ispisi.close();
  }
  void Proba() {
    fstream reading;
    stavka proba;
    reading.open("datoteka.dat", ios::binary | ios::in);

    while (!reading.eof()) {
      reading.read((char *)&naziv, sizeof(naziv));
      reading.read((char *)&kolicina, sizeof(kolicina));
      cout << naziv << "|" << kolicina << endl;
    }
  }

  void promjenaStavke() {
    char st[100];
    for (stavka tmp : listaStavki) {
      cout << tmp.naziv << "|" << tmp.kolicina << endl;
    }
    cout << "Upiši ime stavke koju želiš promijeniti: " << endl;
    cin >> st;
    list<stavka>::iterator ch = listaStavki.begin();
    int br = 0;
    for (; ch != listaStavki.end(); ++ch) {
      cout<<ch->naziv<<endl;
      if (strcmp((*ch).naziv, st)==0 ){
        cout<<"Unesi novi naziv"<<endl;
        cin >> ch->naziv;
        cout<<"Unesi novu kolicinu"<<endl;
        cin>>ch->kolicina;
        cout << "Stavka je promijenjena" << endl;
        br++;
      }
    }
    if (br == 0)
      cout << "Stavka nije naðena" << endl;
  }
};

int main() {
  int izbor;
  stavka dodaj;

  do {
    cout << "###########################################" << endl;
    cout << "###########################################" << endl;
    cout << "1. Ispisivanje svih stavki" << endl;
    cout << "2. Dodavanje nove stavke" << endl;
    cout << "3. Promjena stavke:" << endl;
    cout << "4. Spremanje liste u datoteku" << endl;
    cout << "5. Upis liste iz datoteke" << endl;
    cout << "6. Izlaz" << endl;
    cout << "_________________________________________" << endl;
    cout << endl;
    cout << "Odaberi: " << endl;

    cin >> izbor;

    switch (izbor) {
    case 1:

      cout << "Stavke se ispisuju" << endl;
      for (int i = 0; i < 10; i++)
        cout << "..";
      cout << endl;
      dodaj.ispisStavki();
      break;
    case 2:

      cout << "Dodavanje nove stavke" << endl;
      for (int i = 0; i < 10; i++)
        cout << "..";
      cout << endl;
      dodaj.dodavanjeStavke();
      break;
    case 3:
      cout << "Promjena stavke" << endl;
      for (int i = 0; i < 10; i++)
        cout << "..";
      cout << endl;
      dodaj.promjenaStavke();
      break;
    case 4:
      cout << "Lista se sprema u datoteku" << endl;
      for (int i = 0; i < 10; i++)
        cout << "..";
      cout << endl;
      dodaj.spremanjeListe();
      break;
    case 5:
      cout << "Stavke se ispisuju" << endl;
      for (int i = 0; i < 10; i++)
        cout << "..";
      cout << endl;
      dodaj.Proba();
      break;
    case 6:
      cout << "Izlazim iz programa" << endl;
      break;

    default:
      cout << "Unijeli ste krivo. Ponovite odabir" << endl;
    }

  } while (izbor != 6);

  stavka c;
  c.Proba();
}

/* Napišite program zta upravljanje listom za kupnju. U programu treba biti
definirana klasa 'stavka' koja predstavlja jednu stavku liste za kupnju koja se
sastoji od naziva proizvoda i kolièine.

Klasa treba sadržavati i funkciju za unos nove stavke, ispis stavke i promjenu
stavke.

Program preko izbornika treba omoguæiti slijedeæe opcije:

- ispisivanje stavki svih
- dodavanje nove stavke
- spremanje liste u datoteku
- upis liste iz datoteke
-izlaz


Sve stavke se u programu moraju èuvati u listi(koristiti predložak liste iz
STL-a), a kad se odabere opcija za spremanje u datoteku, podaci se upisuju u
binarnu datoteku.*/
