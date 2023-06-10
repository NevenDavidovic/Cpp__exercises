//Redoslijed pozivanja konstruktora

#include<iostream>
using namespace std;
class Element{
public:
Element(){cout<<"Konstruktor klase Element"<<endl;}

~Element(){cout<<"Destruktor klase Element"<<endl;}

};

class Osnovna{
public:
Osnovna(){cout<<"Konstruktor osnovne klase"<<endl;}

~Osnovna(){cout<<"Destruktor osnovne klase"<<endl;}
};

class Izvedena : public Osnovna{
Element x;
public:
Izvedena(){cout<<"Konstruktor izvedbene klase"<<endl;}
~Izvedena(){cout<<"Destruktor izvedbene klase"<<endl;}



};


int main(){
  Izvedena d;
}

