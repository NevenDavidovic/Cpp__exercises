#include <iostream>
#include <fstream>
#include <ios>
#include <list>
using namespace std;


struct osoba{
  char ime[50];
  int starost;
  char OIB[14];
};

struct vino{
string sifra;
string naziv;
float cijena;
};

int main() {
  osoba ja={"Pero",40,"123456789"};
  osoba book[30];
  int x= 123;
  double fx=35.54;
//otvaranje veze
  ofstream outfile;

  /* veza prema datoteka.dat */        outfile.open("datoteka.dat",ios::binary|ios::out);

  /*write(adresa,velièina )
  prvi argument je pokazivaè na char osim ako je u pitanju tip char*/
  outfile.write((char*)&x,sizeof(int));
  /*sizeof()->size of a certain type*/
outfile.write((char*)&fx,sizeof(fx));//size of variable  
  /*struktura se zapisuje u datoteku */
  outfile.write((char*)&ja,sizeof(ja));//size of struct

  outfile.write((char*)book,30*sizeof(osoba));

  //zatvaranje filea
  outfile.close();

//_________________________
  /*read()*/
/*  
EXAMPLE OF READING FROM A file->
int c;
ifstream inFile;

inFile.open("datoteka.dat",ios::binary|ios::in);

  inFile.read((char*)&c,sizeof(int));
cout<<c<<endl;
  */

//pointers to read and write position

int rw;

streampos pos;
fstream infile;

  infile.open("datoteka.dat",ios::binary|ios::in);
/*ide 243B naprijed od beg*/
infile.seekp(243, ios::beg);

infile.read((char*)&x,sizeof(x));

pos=infile.tellg();
  cout<<"Pokazivac citanja je na lokaciji: "<<pos<<endl;
//ide na kraj datoeke
  infile.seekp(0,ios::end);
  
/*vraæa se 10 bajtova*/  infile.seekp(-10,ios::cur);

infile.close();

//reading finally how to read
/*
ifstream fajl("datoteka.dat", ios::binary);
int i = 0;
  fajl.seekg(sizeof(x)+sizeof(fx));
  fajl.read((char*)&ja,sizeof(ja));

  while(!fajl.eof()){
    cout<<ja.ime<<ja.starost<<ja.OIB;
    fajl.read((char*)&ja,sizeof(ja));
    
  }*/


}









*/
