/* Zadatak 1.

Napravite klasu Person koja opisuje neku osobu. Person sadr�i atribute name (String) surname (String), age (int). Napi�ite konstruktor, get i set metode, te metodu equals (dvije osobe su jednake ako imaju isto ime i prezime te broj godina).

Napravite klase Student i Teacher koje naslje�uju klasu Person, Student sadr�i atribut studentId (String) i academicYear (short int), a Teacher sadr�i atribute email (String), subject (String) i salary (double). Napi�ite konstruktore za sve parametre, get i set metode, te metodu equals (dva studenta su jednaka ako imaju isti studentId, neovisno o ostalim podacima, a dva nastavnika su jednaka ako imaju isti email, neovisno o ostalim podacima). Dodatno, u klasi Teacher napi�ite metodu increaseSalary koja ne vra�a ni�ta, a prima jedan argument tipa integer (koji predstavlja postotak). Metoda treba pove�ati pla�u nastavnika za zadani postotak.*/
#include <iostream>
using namespace std;

class Person{
public:
  string name;
  string surname;
 int age;

Person(){}
Person(string a,string b, int y):name(a),age(y){}
Person get(){
  Person p;
  p.name=name;
  p.surname=surname;
  
  p.age=age;
  return p;
};

void set(string a,string b,string id, int y){
  name=a;
  surname=b;
  age=y;
}
void equals(Person p){
  if(this->name==p.name && this->surname==p.surname&&this->age==p.age)
    cout<<"Iste osobe!"<<endl;
  else cout<<"Nisu iste osobe!"<<endl;
  
} 
  

};

/* Napravite klase Student i Teacher koje naslje�uju klasu Person, Student sadr�i atribut studentId (String) i academicYear (short int), a Teacher sadr�i atribute email (String), subject (String) i salary (double).*/


class Student:public Person{
public:
string studentId;
short int academicYear;
// ---------------------------->
Student(){
  this->studentId="not_written";
  this->academicYear=0;
  }
Student(string id,short int y):studentId(id),academicYear(y){}

void set(string id,short int y){
  this->studentId=id;
  this->academicYear=y;
}

Student get(){
  Student g;
  g.studentId=studentId;
  g.academicYear=academicYear;

return g;
}

void equals(Student c){
  if(this->studentId==c.studentId)cout<<"Isti student"<<endl;
  else cout<<"Nije isti student"<<endl;
}
/*Napi�ite konstruktore za sve parametre, get i set metode, te metodu equals (dva studenta su jednaka ako imaju isti studentId, neovisno o ostalim podacima, a dva nastavnika su jednaka ako imaju isti email, neovisno o ostalim podacima).*/

};
class Teacher:public Person{
public:
string email;
string subject;
double salary;
//------------------------------>
Teacher ():email("_"),subject("_"),salary(0.0){}
Teacher(string e,string s,double pay):email(e),subject(s),salary(pay){
}
Teacher get(){
  Teacher gt;
  gt.email=email;
  gt.subject=subject;
  gt.salary=salary;
  return gt;
}
void set(string e,string sub, double sal){
  this->email=e;
  subject=sub;
  salary=sal;
}

void equals(Teacher t){
  if(email==t.email)cout<<"Isti ucitelji!"<<endl;
  else cout<<"Nisu isti ucitelji"<<endl;
}
/*Dodatno, u klasi Teacher napi�ite metodu increaseSalary koja ne vra�a ni�ta, a prima jedan argument tipa integer (koji predstavlja postotak). Metoda treba pove�ati pla�u nastavnika za zadani postotak.*/

void increaseSalary(int in){
  this->salary=salary+(salary*in/100);
}

void ispis(){
  cout<<"E-mail: "<<email<<endl;
  cout<<"Subject: "<<subject<<endl;
  cout<<"Salary: "<<salary<<endl;
}
};


int main() {
Teacher teacher("neven4380@live.com","matematika",1000);
teacher.increaseSalary(10);
teacher.ispis();




  

return 0;
system("pause");

}
