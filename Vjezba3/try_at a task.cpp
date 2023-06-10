#include <fstream>
#include <iostream>
#include <list>
using namespace std;

struct vino {
  int sifra;
  char naziv[16];
  float cijena;
};

int main() {
  list<vino> listaVina;
  vino v;
  fstream openVina;
  openVina.open("listavina.dat", ios::binary | ios::in);
  while (!openVina.eof()) {
 if (openVina.eof())
        break;
    openVina.read((char *)&v.sifra, sizeof(v.sifra));
    openVina.read((char *)&v.naziv, sizeof(v.naziv));
    openVina.read((char *)&v.cijena, sizeof(v.cijena));
    
    listaVina.push_back(v);
    cout << v.sifra << "||" << v.naziv << "||" << v.cijena << endl;
  }
  openVina.close();
  for (vino v : listaVina)
    cout << v.sifra << "||" << v.naziv << "||" << v.cijena << endl;

  cout << "Upis vina" << endl;

  cout << "Upisi vino" << endl;
  vino upis;
  cout << "Sifra: " << endl;
  cin >> upis.sifra;
  cout << "Naziv: " << endl;
  cin >> upis.naziv;
  cout << "Cijena: " << endl;
  cin >> upis.cijena;
  //dodavanje u listu
listaVina.push_back(upis);
list<vino> ::iterator j;


openVina.open("listavina.dat", ios::binary | ios::out|ios::trunc);
  for(j=listaVina.begin();j!=listaVina.end();++j){
    

    openVina.write((char*) &j->sifra,sizeof(j->sifra));
    openVina.write((char*) &j->naziv,sizeof(j->naziv));
    openVina.write((char*) &j->cijena,sizeof(j->cijena));
  }



  
  //for petlja za uèitavanje 
/*for(vino v:listaVina){
  openVina.write((char*) &v.sifra,sizeof(v.sifra));
  openVina.write((char*) &v.naziv,sizeof(v.naziv));
  openVina.write((char*) &v.cijena,sizeof(v.cijena));
  
}*/
  openVina.close();
  openVina.open("listavina.dat", ios::binary | ios::in);
  while (!openVina.eof()-1) {
  
    openVina.read((char *)&v.sifra, sizeof(v.sifra));
    openVina.read((char *)&v.naziv, sizeof(v.naziv));
    openVina.read((char *)&v.cijena, sizeof(v.cijena));

  cout << v.sifra << "||" << v.naziv << "||" << v.cijena << endl;}
  
openVina.close();

}

/*ZADATAK NA KRAJU

• Napisati program koji radi sa listom vina u
binarnoj datoteci listavina.dat
• Za svako vino èuvaju se slijedeæi podaci:
– šifra
– naziv
– cijena
• Datoteka listavina.dat i predložak zadatka se
nalaze na e-uèenju

Potrebno je dopisati slijedeæe funkcionalnosti u program:
• Uèitavanje sadržaja datoteke u listu i ispis ga na zaslon
• Dodavanje novog vina na listu (i u datoteku)
• Izmjena cijene vina (u listi i datoteci)
• Brisanje vina sa liste (u listi i datoteci)
• Sortiranje liste vina po sifri (u listi i datoteci)
• Zamjena redoslijede dva vina u listi (i datoteci)
*/
