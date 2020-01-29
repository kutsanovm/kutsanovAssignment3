#include <iostream>
#include <cstring>
#include "Pets.h"

/* Create a class called Pet with all the necessary files (.h , .cpp, etc.)
This class should have member variables name (string), age (int), type ([‘dog’, ‘cat’]) (string)
and weight (double). Make sure to include the appropriate accessor (getters), mutator (setters).
Once the Pet class has been implemented, create two instances of Pet and
print their details to console output.
*/
using namespace std;

Pets::Pets()
{
  m_name = "Igor";
  m_age = 4;
  m_type = "dog";
  m_weight = 59.9;
}

Pets::Pets(string name, int age, string type, double weight)
{
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

string Pets::getName()
{
  return m_name;
}

int Pets::getAge()
{
  return m_age;
}

string Pets::getType()
{
  return m_type;
}

double Pets::getWeight()
{
  return m_weight;
}

void Pets::setName(string name)
{
  m_name = name;
}

void Pets::setAge(int age)
{
  m_age = age;
}

void Pets::setType(string type)
{
  m_type = type;
}

void Pets::setWeight(double weight)
{
  m_weight = weight;
}
