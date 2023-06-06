/*class Node {

 public:

 float key;

 Node *prev;

 Node *next;



 Node();

 Node(float val, Node *left, Node *right);

 };



Tijek zadatka:



1.  Definirajte klasu Node sa slijedeæim elementima:

Node() - Implementirajte defaultni konstruktor koji postavlja key na 0.0, a
pokazivaèe na NULL
___________________________________________>
Node(float val, Node *prev, Node *next) - konstruktor koji postavlja vrijednost
od key na val, i pokazivaèe Node::prev na prev odnosno Node::next na next
___________________________________________________
Napravite barem 3 dinamièki alocirana objekta klase Node i postavite im
proizvoljne vrijednosti na atribut key a za prev i next odaberite adrese
postojeæih objekata. Za svaki objekt ispišite sadržaj varijable key, prev i next
koristeæi pristup preko pokazivaèa. Na kraju dealocirajte objekte iz memorije.*/

#include <iostream>

using namespace std;

class Node {
public:
  float key;
  Node *prev;
  Node *next;
  // konsttruktori
  Node() {
    this->key = 0.0;
    prev = nullptr;
    next = nullptr;
  };
  /*Node(float val, Node *prev, Node *next) - konstruktor koji postavlja
   * vrijednost od key na val, i pokazivaèe Node::prev na prev odnosno
   * Node::next na next*/
  Node(float val, Node *left, Node *right) {
    this->key = val;
    this->prev = left;
    this->next = right;
  }
};
/*
Napravite barem 3 dinamièki alocirana objekta klase Node i postavite im
proizvoljne vrijednosti na atribut key a za prev i next odaberite adrese
postojeæih objekata. Za svaki objekt ispišite sadržaj varijable key, prev i next
koristeæi pristup preko pokazivaèa. Na kraju dealocirajte objekte iz memorije.
*/

int main() {
  Node *node1 = new Node(1.5, nullptr, nullptr);
  Node *node2 = new Node(2.7, nullptr, nullptr);
  Node *node3 = new Node(3.9, nullptr, nullptr);

  // Set addresses of existing objects to prev and next pointers
  node1->prev = nullptr;
  node1->next = node2;

  node2->prev = node1;
  node2->next = node3;

  node3->prev = node2;
  node3->next = nullptr;

  // Print the content of key, prev, and next using pointers
  std::cout << "Node 1: key=" << node1->key << ", prev=" << node1->prev
            << ", next=" << node1->next << std::endl;
  std::cout << "Node 2: key=" << node2->key << ", prev=" << node2->prev
            << ", next=" << node2->next << std::endl;
  std::cout << "Node 3: key=" << node3->key << ", prev=" << node3->prev
            << ", next=" << node3->next << std::endl;

  // Deallocate the objects from memory
  delete node1;
  delete node2;
  delete node3;

  return 0;
  system("pause");
}
