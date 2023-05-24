#include <iostream>
#define maxE 10000
typedef int tipPodatka;
using namespace std;

struct stack{
  tipPodatka polje[maxE];
  int vrh;
  };

// inicijalizacija stoga

void makeNull(stack &S){
  S.vrh=maxE-1;
}

void push(tipPodatka x,stack &S){
  S.polje[S.vrh]=x;
  cout<<"Dodali ste element "<<x<<" na "<<S.vrh<<endl;
  S.vrh--;
  
}

void pop(stack &S){
  ++S.vrh;
  cout<<"Izbacili ste element "<<S.polje[S.vrh]<<" mjesto: "<<S.vrh<<endl;
  
}

tipPodatka top (stack S){
  return S.polje[S.vrh+1];
}


void printS(stack &S){
  if(S.vrh>=maxE){
    cout<<"Stog je prazan"<<endl;
  }
  else {cout<<"Stog od zadnjeg ubačenog do prvog:"<<endl;
  for(int i=S.vrh;i<maxE;i++)
    cout<<"->" << S.polje[i];
   return;    
       }
     
}