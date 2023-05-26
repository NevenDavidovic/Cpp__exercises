// ubacivanje elemenata u listu
#include <iostream>
#include <list> // dvostruko vezana lista
using namespace std;
// compare function for sorting list of strings by size
bool compare_function( string& s1 , string& s2 ){
return ( s1.length() < s2.length() );}
// multiplicates every element of a list with a multiplicator
void pomnozi(list<int> &l, int multiplikator){
  list <int> :: iterator it;
  it=l.begin();
  for(;it!=l.end();++it){
    *it*=multiplikator;
  }

}
//couts the list of integers

void ispis(list <int> l){
    for (int x : l)
    cout << x << ", ";
}
//couts the list of strings
void ispisS(list <string> l){
    for (string x : l)
    cout << x << ", ";
}
//is the list of characters sorted
bool isSorted(list <char> l){
  bool sortdD=true;
  list <char> :: iterator i=l.begin();
  auto it=next(i);
  for(;it!=l.end();){
   if(*i>*it) {sortdD=false;break;}
    ++i;
    ++it;
  }
  return sortdD;
}

int main() {
  list<int> l = {1, 2, 3, 4, 5}; // c++ 11
  list<int> lpin={};
  cout << "Example 1. Ubacivanje elemenata u listu" << endl;
  l.push_back(6);
  l.push_back(7);
  /* sad je lista: 1,2,3,4,5,6,7 */
  l.push_front(8);
  l.push_front(9);
  /* sad je lista: 9,8,1,2,3,4,5,6,7 */
  cout << endl;
  cout << "Example 2. Brisanje elemenata iz liste" << endl;

  l.pop_back();
  l.pop_front();
  /* sad je lista l: 8,1,2,3,4,5,6 */
  /*CUTE LIL FOR LOOP*/
 ispis(l);

  cout << endl << endl;

  cout << "Example 3. Iterator " << endl;
  list<int>::iterator i = l.begin();
  // loop with the iterator

  cout << "Iterator loop:" << endl;
  for (; i != l.end(); ++i) {
    cout << *i << "|";
  }
  cout << endl;

  cout << "Example 4. Brisanje određenog broja unutar liste" << endl;
  i = l.begin();
  ispis(l);

  cout << endl;
  cout << "Example 5. Reverse|Sort " << endl;
  l.reverse();
  l.sort();
  cout<<l.size();//number of elements in a list
  ispis(l);
  cout<<endl;
  cout<<"________________________________________"<<endl;
  cout<<"________________________________________"<<endl;

list<string> l_string;
cout<<"ZADATAK 1."<<endl;
string rijec;
  do{
    cout<<"Upiši riječ"<<endl;
    cin>>rijec;
    if(rijec=="kraj") continue;
    l_string.push_back(rijec);
    
  }while(rijec!="kraj");

  ispisS(l_string);
cout<<endl;

cout<<"Zadatak 2."<<endl;
int broj;
  do{
    cout<<"Upiši broj"<<endl;
    cin>>broj;
    if(broj==0) continue;
    if(broj%2==0) lpin.push_back(broj);
    if(broj%2!=0) lpin.push_front(broj);
    
    
  }while(broj!=0);
  ispis(lpin);
  cout<<endl;

  cout<<"Zadatak 3."<<endl;
  pomnozi(lpin,2);
  ispis(lpin);
  cout<<endl;

  cout<<"Zadatak 4."<<endl;
  // nađi kako pretvoriti brojeve u ASCII <static cast>
  //char se mogu uspoređivat i bez pretvaranja
  list<char> cl={'a','b','e','d','e'};
  int rez=isSorted(cl);
  if(rez){
    cout<<"Lista je sortirana"<<endl;
  } else cout<<"Lista nije sortirana"<<endl;

  cout<<"Zadatak 5."<<endl;

  list<string> rijeci={"nev","ud"};
  list<string>:: iterator rijeciIt=rijeci.begin();
  //ispisujeveličinu liste
  int brojs=rijeci.size();


  
for(;rijeciIt!=rijeci.end();++rijeciIt){
  string rijecL=*rijeciIt;
  int velicina=rijecL.size();
  for(int i = 0; i <velicina; ++i){
    rijeci.insert(rijeciIt,string(1, rijecL[i]));
  }
  
}
ispisS(rijeci); 

  
  
  system("pause");
  return 0;
  }

/*Zadaci:

1. Napišite program koji učitava i stavlja na kraj liste stringove sve dok se ne učita string “kraj”.

2. Napišite program koji učitava i stavlja na kraj liste parne brojeve, a na početak liste neparne brojeve. Unos se završava kad se upiše 0.

3. Napišite funkciju: void pomnozi (list <double> L, double mulitplikator) kojom se svi elementi liste L množe s vrijednošću parametra multiplikator.

4. Lista sadrži niz znakova. Napišite funkciju bool IsSorted(const list<char>& L)koja vraća true ako su elementi liste sortirani uzlazno, inače vraća false. 

5. Napišite program koji  ispred svakog stringa S u listi dodajte još onoliko čvorova koliko S ima slova, u svaki od čvorova upišite po jedno slovo od S - npr. ako je učitana lista bila (“NTP”, “Jupi”), onda rezultantna lista treba biti (“N”, “T”, “P”, “NTP”, “J”, “u”, “p”, “i”, “Jupi”)

*/