// Primjer overloading kod naslje?ivanja

#include<iostream>
using namespace std;

//class Klasa;

class Podklasa{
	private:
		int a;
	public:
		void set(int x){
			a=x;
		}
		void ispisP(){
			cout<<"a="<<a<<endl;
		}
		Podklasa(): a(0) {} //defaultni konstruktor
		Podklasa (int x): a(x){	} //konstruktor s par.
};

class Klasa{
	private:
		int b;
		Podklasa c;
	public:
		Klasa(): b(0),c(0) {}
		Klasa(int x): b(x) {}
		Klasa(int x, int y): b(x), c(y){ }
		void ispis(){
			cout<<"b="<<b<<endl;
			this->c.ispisP();
		}
		
};


int main(){
	Klasa X;
	Klasa Y(1);
	Klasa Z(2,3);
	cout<<"X:"<<endl;
	X.ispis();
	cout<<"Y:"<<endl;
	Y.ispis();
	cout<<"Z:"<<endl;
	Z.ispis();
	return 0;
}
