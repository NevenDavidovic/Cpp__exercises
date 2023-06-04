/*Zadatak 2

Definirajte klasu Datum koja ima sljedeæe atribute:

->Cjelobrojne atribute dan, mjesec i godina.
-.Privatnu metodu void ispis() koja ispisuje datum u formatu ->dan.mjesec.godina.
Javnu metodu void postavi(int a, int b, int c)koja postavlja datum na vrijednosti parametara a, b i c. Za dan dozvoljene vrijednosti su 0-30, za mjesec 0-12 i za godinu 0-2020. Ako su parametri neispravni datum se postavlja na 01.01.2020. Nakon postavljanja funkcija ispisuje postavljeno vrijeme koristeæi funkciju ispis.
Javnu metodu void razlika(Datum a, Datum b) koja izraèuna i ispiše razliku izmeðu datuma a i b u danima.
Nadopunite glavni program s funkcijom koja od korisnika traži unos datuma roðenja i trenutnog datuma, te funkcijom koja ispisuje njegovu trenutnu starost (u danima). Radi jednostavnosti proraèuna pretpostavljamo sve godine imaju 365 dana.*/


#include <iostream>
using namespace std;

class Date{
int d,m,y;
public:
// set datum
void postavi(int ac, int bc, int cc){
  if(ac<1||ac>30||bc<0||bc>12||cc<0||cc>2020){
    d=1;
    m=1;
    y=2020;
  
  }
  else{  d=ac;
  m=bc;
  y=cc;} 

  ispis();


}

// ispis datuma
  void ispis(){
    cout<<"Datum: "<<d<<"."<<m<<"."<<y<<"."<<endl;
  }

void razlika(Date a,Date b){

  int _datum1= (a.y-1)*365+(a.m-1)*30+d;
  int _datum2=(b.y-1)*365+(b.m-1)*30+d;
  int min=(a.y-b.y)*2;
  if(min<0) min=min*-1*2;
  

  int rez=_datum1-_datum2;
  if(rez<0) rez=rez*-1;

  cout<<rez-min<<endl;
  
  
  
  
}
void starostD(Date a, Date b){
int _datum1= (a.y-1)*365+(a.m-1)*30+d;
int _datum2=(b.y-1)*365+(b.m-1)*30+d;
int min=(a.y-b.y)*2;
  if(min<0) min=min*-1*2;
int rez=_datum1-_datum2;
  if(rez<0) rez=rez*-1;
 cout<<(rez-min)/365<<endl; 
}

};


int main(){

  Date datum;
  datum.postavi(12,11,2020);
  Date starost,datumi;
  starost.postavi(3,2,1989);
  datumi.postavi(2,2,2020);

  datum.starostD(starost,datumi);
  
  
  

  return 0;
}
