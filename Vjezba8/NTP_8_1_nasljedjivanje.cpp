// Primjer nasljeðivanja

#include<iostream>
using namespace std;

class Prvi{
	private:
		int a;
	public:
		void seta(int x){
			a=x;
		}
		void ispisa(){
			cout<<"a="<<a<<endl;
		}
};

class Drugi: public Prvi{
	private:
		int b;
	public:
		void setb(int x){
			b=x;
		}
		void ispisb(){
			cout<<"b="<<b<<endl;
		}
	
};

class Treci: public Drugi{
	private:
		int c;
	public:
		void setc(int x, int y, int z){
			this->seta(x);
			this->setb(y);
			c=z;
		}
		void ispisc(){
			this->ispisa();
			this->ispisb();
			cout<<"c="<<c<<endl;
		}
};

int main(){
	Prvi A;
	Drugi B;
	Treci C;
	// rad sa prvim objektom
	cout<<"Prvi:"<<endl;
	A.seta(1);
	A.ispisa();
	// rad sa drugim objektom
	cout<<"Drugi:"<<endl;
	B.seta(2);
	B.setb(3);
	B.ispisa();
	B.ispisb();
	// rad sa trecim objektom
	cout<<"Treci:"<<endl;
	C.setc(4,5,6);
	C.ispisc();
	return 0;
}
