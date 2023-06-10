/**/


#include <iostream>
#include <cstring>
using namespace std;

class GeometrijskiLik{
char naziv[20+1];
public:
GeometrijskiLik(){}
GeometrijskiLik(string s){
  
  strncpy(naziv, s.c_str(), 20);
  naziv[20] = '\0';
}
virtual double Opseg()=0;
virtual double Povrsina()=0;
string kojiLik(){
  return naziv;
}
};

class Pravokutnik:public GeometrijskiLik{
double a,b;
public:
Pravokutnik(){}
Pravokutnik(string ime,double a1,double a2):a(a1),b(a2),GeometrijskiLik(ime){}

double Opseg(){return 2*(a+b);};
double Povrsina(){
  return a*b;
};
};

class Kvadrat:public GeometrijskiLik{
double a;
public:
Kvadrat(){}
Kvadrat(string ime,double ac):a(ac),GeometrijskiLik(ime){}
double Opseg(){
  return 4*a;
};
double Povrsina(){
  return a*a;
};
};

class Krug:public GeometrijskiLik{
double radius;
public:
Krug(){}
Krug(string ime,double r):radius(r),GeometrijskiLik(ime){}
double Opseg(){
  return 2*radius*3.14;
};
double Povrsina(){
  return radius*radius*3.14;
};
};

int main() {
Pravokutnik p("Pravokutnik",3,2);
Krug k("Krug",2);
Kvadrat kv("Kvadrat",4);

GeometrijskiLik *gL;
gL=&p;
cout<<gL->kojiLik()<<"->Povrsina: "<<gL->Povrsina()<<" | Opseg: "<<gL->Opseg()<<endl;
gL=&k;
cout<<gL->kojiLik()<<"->Povrsina: "<<gL->Povrsina()<<" | Opseg: "<<gL->Opseg()<<endl;
gL=&kv;

cout<<gL->kojiLik()<<"->Povrsina: "<<gL->Povrsina()<<" | Opseg: "<<gL->Opseg()<<endl;
  
  system("pause");
  return 0;
}
