#include <iostream>
#include <cmath>
using namespace std;

struct tocka {
int x,y;
void ispisiTocku();
void unesiTocku();
// simetricna tocka je tocka koja ima iste koordinate ali suprotnim predznacima
tocka simetricnaTocka();
float udaljenost(tocka Q);

};
int main() {
  tocka B;
  B.unesiTocku();
  B.ispisiTocku();
  tocka result= B.simetricnaTocka();

  cout<<result.x<<"|"<<result.y<<endl;
  
}

void tocka :: unesiTocku(){
  cout<<"Unesi tocku 1: "<<endl;
  cin>>x;
  cout<<"Unesi tocku 2: "<<endl;
  cin>>y;
}

void tocka :: ispisiTocku(){
  cout<<"Tocka 1= "<<x<<endl;
  cout<<"Tocka 2= "<<y<<endl;
}

tocka tocka::simetricnaTocka(){
  tocka A;
  A.x=-1*x;
  A.y=-1*y;

  return A;
}

float tocka:: udaljenost(tocka Q){
float rez;
rez=sqrt(pow(Q.x-x,2)-pow(Q.y-y,2));
  return rez;
}
