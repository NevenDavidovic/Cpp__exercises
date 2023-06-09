/*Napravite klasu Dessert koja ima sljedeæe privatne atribute: name (String),
weight (double) i calories (int). Dodajte klasi konstruktor koji prima kao
parametre vrijednosti za sva 3 atributa. Napravite get i set metode za svaki
atribut, te nadjaèajte metodu toString. Napišite i javnu metodu getDessertType
koja nema argumenata a vraæa string „dessert“.

Napravite klase Cake i IceCream koje nasljeðuju Dessert. Kolaè, uz sve atribute
iz klase Dessert ima i atribute containsGluten (boolean) i cakeType (String,
može biti „birthday“, „wedding“, „regular“ i sl.). Sladoled ima dodatne atributeflavour (String) i color (String). Napravite get i set metode za svaki atribut,
kao i metodu toString koja vraæa sve što vraæa i metoda toString iz Klase
Dessert, a dodatno još i atribute specifiène za izvedenu klasu. Napišite javnu
metodu getDessertType u svakoj od izvedenih klasa, koja æe za sladoled vratiti
tekst „ice cream“, a za tortu vrijednost atributa cakeType i tekst „ cake“.
Napišite glavni program s kojim æete testirati sve zadane funkcionalnosti.*/

#include <iostream>
using namespace std;
/*Dodajte klasi konstruktor koji prima kao parametre vrijednosti za sva 3
 * atributa. Napravite get i set metode za svaki atribut, te nadjaèajte metodu
 * toString. Napišite i javnu metodu getDessertType koja nema argumenata a vraæa
 * string „dessert“.*/
class Dessert {
private:
  string name;
  double weight;
  int calories;

public:
  Dessert() {}
  Dessert(string n, double w, int c) : name(n), weight(w), calories(c) {}

  Dessert getDessert() {
    Dessert g;
    g.name = name;
    g.weight = weight;
    g.calories = calories;

    return g;
  }

  string getName() { return name; }
  double getWeight() { return weight; }
  int getCalories() { return calories; }
  void setName(string n) { this->name = n; }
  void setWeight(double w) { this->weight = w; }
  void setCalories(int c) { this->calories = c; }
};
/*Napravite klase Cake i IceCream koje nasljeðuju Dessert. Kolaè, uz sve
 * atribute iz klase Dessert ima i atribute containsGluten (boolean) i cakeType
 * (String, može biti „birthday“, „wedding“, „regular“ i sl.). Sladoled ima
 * dodatne atribute flavour (String) i color (String). Napravite get i set
 * metode za svaki atribut, kao i metodu toString koja vraæa sve što vraæa i
 * metoda toString iz Klase Dessert, a dodatno još i atribute specifiène za
 * izvedenu klasu.*/
class Sladoled : public Dessert {
public:
  string flavour;
  string color;

  void setSladoledFlavour(string flav) { flavour = flav; }
  void setSladoledColor(string col) { color = col; }

  string getFlavour() { return flavour; }

  string getColor() { return color; }
  void getDessertType() { cout << "Ice Cream-------->" << endl; }
};
/*Napišite javnu metodu getDessertType u svakoj od izvedenih klasa, koja æe za
 * sladoled vratiti tekst „ice cream“, a za tortu vrijednost atributa cakeType i
 * tekst „ cake“. Napišite glavni program s kojim æete testirati sve zadane
 * funkcionalnosti.*/
class Cake : public Dessert {
public:
  bool containsGluten;
  string cakeType;
  Cake() {}
  Cake(string name, double weight, int calories, bool gluten, string type)
      : Dessert(name, weight, calories), containsGluten(gluten),
        cakeType(type) {}
  void getDessertType() { cout << "Cake--------->" << endl; }

  string getCakeName() { return getName(); }

  double getCakeWeight() { return getWeight(); }

  int getCakeCalories() { return getCalories(); }

  string getCakeType() { return cakeType; }

  bool getContainsGluten() { return containsGluten; }

  void setCakeType(string set) { cakeType = set; }
  void setContainsGluten(bool tOrF) { containsGluten = tOrF; }
};

ostream &operator<<(ostream &ispis, Cake &k) {
  ispis << "Name: " << k.getName() << endl
        << "Weight: " << k.getWeight() << endl
        << "Calories: " << k.getCalories() << endl
        << "Type: " << k.cakeType << endl
        << "Gluten Free or Not: " << k.containsGluten << endl;

  return ispis;
}

int main() {
  Cake cake("Birthday Cake", 0.5, 300, true, "birthday");
  cake.getDessertType();
  cout << cake;
  cout<<cake.getName()<<endl;
  cout<<cake.getCakeName()<<endl;

  // ___________________________________________________
  
  system("pause");
  return 0;
}
