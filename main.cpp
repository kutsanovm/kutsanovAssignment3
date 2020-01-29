#include <iostream>
#include <cstring>
#include "Pets.h"
#include "Pets.cpp"

using namespace std;

/* Create a class called Pet with all the necessary files (.h , .cpp, etc.)
This class should have member variables name (string), age (int), type ([‘dog’, ‘cat’]) (string)
and weight (double). Make sure to include the appropriate accessor (getters), mutator (setters).
Once the Pet class has been implemented, create two instances of Pet and
print their details to console output.
*/
int main(int argc, char ** argv)
{
  Pets *p = new Pets();
  Pets *p2 = new Pets("Allan", 8, "cat", 12.45);

  p->setName("Frank");
  p->setAge(2);
  cout << p->getName() << " is a " << p->getAge() << " year old " << p->getType() << " weighing " << p->getWeight() << " pounds." << endl;

  cout << p2->getName() << " is a " << p2->getAge() << " year old " << p2->getType() << " weighing " << p2->getWeight() << " pounds." << endl;

  delete p;
  delete p2;
}
