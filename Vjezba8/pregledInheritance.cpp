#include <iostream>
using namespace std;

class Baza {

private:
  void prva() { cout << "prva" << endl; };

protected:
  void druga() { cout << "druga" << endl; }

public:
  void treca() { cout << "treca" << endl; }
};

class Izvedena : public Baza {
public:
  void cetvrta() { this->druga(); }
};

//Ugniježdena klasa



int main() {

  Baza A;

  A.treca();
// pristupanje funkciji  iz A
  Izvedena B;
  B.treca();
  B.cetvrta();



  //kad koristimo objekte
  system("pause");
  return 0;
}



/*




*/
