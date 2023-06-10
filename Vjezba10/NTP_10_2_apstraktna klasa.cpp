#include <iostream> 
using namespace std; 

// Apstraktna klasa 
class Osoba{ 
  public: 
	// cista virtualna funkcija 
	//virtual void opisPosla() = 0; // virtual void opisPosla() = 0; 
	virtual void opisPosla()=0;
	
}; 

class Vozac : public Osoba{ 
  public: 
	// implementacija metode opisPosla u klasi 	Vozac! 
	void opisPosla(){ cout << "Vozac!" << endl;} 	// Ova funkcija mora postojati jer je apstraktna klasa obvezuje na to
}; 


int main(){
	//Osoba x; // Greska - ne možemo kreirati objekt koji pripada apstraktnoj klasi
	Vozac y;
	y.opisPosla();
	// y.Osoba::opisPosla();   // Greska - ova funkcija je èista virtualna
}

