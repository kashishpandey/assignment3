/*
Create a class called Pet with all the necessary files (.h , .cpp, etc.) This class should have
member variables name (string), age (int), type ([‘dog’, ‘cat’]) (string) and weight (double). Make sure to
include the appropriate accessor (getters), mutator (setters). Once the Pet class has been implemented,
create two instances of Pet and print their details to console output.
*/

#include <iostream>
#include <string>
using namespace std;

class Pet {

public:
  void setName(string petName);
  void setAge(int petAge);
  void setWeight(double petWeight);
  void setPetType(string petType);
  void Print();

private:
  string name;
  int age;
  double weight;
  string type;
};

void Pet::setName(string petName){
  name = petName; //assigning name to pet name
}

void Pet::setAge(int petAge){
  age = petAge; // assigning age to pet age
}

void Pet::setWeight(double petWeight){
  weight = petWeight; // assigning weight to pet weight
}

void Pet::setPetType(string petType){
  type = petType; // assigning type pet type
}

void Pet :: Print(){
  cout << "Name: " << name << endl << "Age: " << age << endl
   << "Weight: " << weight << endl << "Type: " << type << endl;
}


int main(){

  // two instances of Pet
  Pet cat;
  Pet mouse;

  cat.setPetType("Cat");
  cat.setName("Rosie");
  cat.setAge(4);
  cat.setWeight(20);

  mouse.setPetType("Mouse");
  mouse.setName("Jerry");
  mouse.setAge(1);
  mouse.setWeight(2);

  cat.Print();
  mouse.Print();

  return 0;

}
