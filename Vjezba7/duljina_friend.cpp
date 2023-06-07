// Klasa duljina sa prijateljskom funkcijom i prijateljskom klasom
#include <iostream>
#include <cmath>
using namespace std;

class duljina{
	private:
		int m;
		int cm;
		void sredi(){
			if(cm>99){
				m+=cm/100;
				cm-=cm/100*100;
			}
		}
	public:
		duljina(): m(0), cm(0){}
		duljina(int x, int y): m(x), cm(y) {this->sredi();}
	friend void ispis(duljina);	
	friend class soba;
};

void ispis(duljina x){
			cout<<x.m<<"m "<<x.cm<<"cm"<<endl;
}

class soba{
	private:
		duljina sirina, dubina;
	public:
		friend void ispis(duljina);
		soba(): sirina(0,0), dubina(0,0) {}
		soba(int a, int b,int c, int d): sirina(a,b), dubina(c,d) {}
		pokazi(){
			cout<<"sirina: ";
			ispis(sirina);
			cout<<"dubina: ";
			ispis(dubina);
			cout<<"povrsina: ";
			ispis(this->povrsina());
		}
		duljina povrsina(){
			int temp;
			duljina p;
			temp=(this->sirina.m*100+this->sirina.cm)*(this->dubina.m*100+this->dubina.cm)/100;
			p.cm=temp;
			p.sredi();
			return p;
		}
};

int main(){
	duljina a(5,225);
	soba b(2,1,4,2);
	ispis(a);
	b.pokazi();
	return 0;
}
