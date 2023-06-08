/* Zadatak 1.

Neka je zadana klasa A:


Napišite klasu B koja je izvedena iz klase A i sadri public funkciju koja vraæa umnoak èlanova a i b. */


class A {
   public:
      
      int a;
      int b;
      A ():a(0),b(0){}
      A(int x, int y) : a(x), b(y) {}
       
};

class B:public A{
public:
B(){}
B(int x, int y) {
  a=x;
  b=y;
}
int umnozak(){
  return a*b;
}

};

#include <iostream>
using namespace std;

int main() {
B klasa(2,2);
int res=klasa.umnozak();
cout<<res;

  

return 0;
system("pause");

}
