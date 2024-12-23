#include "Animal.h"

Animal::Animal()
{
  setAge(0);
  setWeight(1);
  diet = "Herbivore";
}

Animal::Animal(int _age, double _weight, const std::string & _diet)
{
  setAge(_age);
  setWeight(_weight);
  diet = _diet;
}

Animal::~Animal()
{
  std::cout << "Animal object with age " << getAge() << " and weight " << getWeight() << " is being destroyed" << std::endl; 
}

int Animal::getAge() const
{
  return age;
}

double Animal::getWeight() const
{
  return weight;
}

void Animal::setAge(int _age)
{
  if(_age >= 0)
    age = _age;
  else
    age = 0;
}

void Animal::setWeight(double _weight)
{
  if(_weight >= 0 && _weight <= 400000)
    weight = _weight;
  else
    weight = 1;
}

void Animal::eat() const
{
  std::cout << "Animal is eating" << std::endl;  
}

void Animal::sleep() const
{
  std::cout << "Animal is sleeping" << std::endl;
}