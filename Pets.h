
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Pets
{
  public:
    Pets(string name, int age, string type, double weight);
    Pets();

    string getName();
    int getAge();
    string getType();
    double getWeight();

    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    string m_name;
    unsigned int m_age;
    string m_type;
    double m_weight;
};
