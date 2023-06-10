#include <iostream> 
using namespace std; 

class Zivotinja{	
  public:	
	virtual void glasanje()=0;
};

class Macka : public Zivotinja{
  public:
	void glasanje() {
		cout<<"mijau mijau..."<<endl;
	}
};

class Pas : public Zivotinja{	
  public:
	void glasanje() {
		cout<<"vau vau ..."<<endl;
	}
};

int main(){
	Zivotinja *pok;
	Macka maca;
	Pas peso;
	pok=&maca;
	pok->glasanje();//mijau mijau
	pok=&peso;
	pok->glasanje(); // vau vau
	system("pause");
	return 0;
}

