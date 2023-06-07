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
		void ispis(){
			cout<<m<<"m "<<cm<<"cm"<<endl;
		}
		friend ostream &operator<<( ostream &, const duljina & );
		friend istream &operator>>( istream  &, duljina & );
		
		friend duljina operator+(const duljina& , const duljina& );
		duljina& operator+=(const duljina& B){  //clan klase
			m=m+B.m;
			cm=cm+B.cm;
		}
		bool operator<(duljina B){
			if(this->m<B.m)
				return 1;
			else if (this->m==B.m && this->cm<B.cm)
				return 1;
			else
			return 0;
		}
		duljina operator++(int) { //postfix ++ - dummy arg
			duljina temp=*this;
			m++;
			return temp;
		}
		duljina operator++(){ //prefix operator ++
			++m;
			return *this;
		} //prefix

		
};

ostream &operator<<( ostream &izlaz, const duljina &D ) { 
         izlaz << D.m << " m " << D.cm<< " cm " ;
         return izlaz;            
      }

istream &operator>>( istream  &ulaz, duljina &D ) { 
         ulaz >> D.m >> D.cm;
         return ulaz;            
      }

duljina operator+(const duljina& A, const duljina& B){//nije clan
	duljina Tmp;
	Tmp.m=A.m+B.m;
	Tmp.cm=A.cm+B.cm;
	Tmp.sredi();
	return Tmp;
}



int main(){
	duljina a,b;
	cout<<"Upisi prvu duljinu: ";
	cin>>a;
	cout<<"Upisi drugu duljinu: ";
	cin>>b;
	cout<<"Prva duljina: ";
	cout<<a;
	cout<<"Druga duljina: ";
	cout<<b;
	cout<<"Zbroj: "<<a+b<<endl;
	a+=b;
	cout<<a;
	cout<<(a<b)<<endl;
	cout<<++a<<endl;
	cout<<a++<<endl;
	cout<<a<<endl;
	
	return 0;
}
