// Primjer overloading kod naslje?ivanja

#include<iostream>
using namespace std;

class Prvi{
	private:
		int a;
	public:
		void set(int x){
			a=x;
		}
		void ispis(){
			cout<<"Prvi::a="<<a<<endl;
		}
};

class Drugi: public Prvi{
	private:
		int a;
	public:
		void set(int x){
			a=x;
		}
		void ispis(){
			cout<<"Drugi::a="<<a<<endl;
		}
		void ispissvih(){
			cout<<"Ispis svih elemenata:"<<endl;
			this->Prvi::ispis();
			cout<<"Drugi::a="<<a<<endl; //this->ispis();
		}
};


int main(){
	Drugi A;
	A.set(1);
	A.ispis();
	A.ispissvih();
	A.Prvi::set(2);
	A.Prvi::ispis();
	A.ispissvih();
	
	return 0;
}
