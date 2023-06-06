// KONSTRUKTOR KOPIJE
//Klasa sa pokazivaèima


#include <iostream>
using namespace std;

class Tocka{
public:
int x,y;
// dodavanje parametara
Tocka(int a, int b):x(a),y(b){}
//inicijalizacija toèke na (0,0)
Tocka():x(0),y(0){}

void ispis(){cout<<"("<<x<<","<<y<<")"<<endl;}
void postaviX(int x){
  this->x=x;
}
void postaviY(int y){this->x=y;}
  



};

class pTocka{
public:
int *x;
int*y;
pTocka(int a=0,int b=0){
  x=new int(a);
  y=new int(b);
  }
~pTocka(){
  delete x,y;
}
void ispis(){
 cout<<"("<<x<<","<<y<<")"<<endl;
}
void postaviX(int a){
  *x=a;
}
void postaviY(int b){
  *x=b;
}
};



int main(){
  
  Tocka z;
  z.ispis();
Tocka x(1,2),y(x);
  x.ispis();
  y.postaviX(2);
  x.ispis();
  y.ispis();

  system("pause");
  return 0;
  
}
