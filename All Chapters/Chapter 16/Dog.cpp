#include "Dog.h"

Dog::Dog()
{
  setBreed("Unknown");
}

Dog::Dog(const std::string &_hairColor, const std::string &_breed) : Mammal(_hairColor)
{
  setBreed(_breed);
}

Dog::Dog(int _age, double _weight, const std::string &_hairColor, const std::string &_breed, const std::string &_diet) : Mammal(_age, _weight, _hairColor, _diet)
{
  setBreed(_breed);
}

Dog::~Dog()
{
  std::cout << "Dog object with age " << getAge() << " and weight " << getWeight() << " is being destroyed" << std::endl;
}

std::string Dog::getBreed() const
{
  return breed;
}

void Dog::setBreed(const std::string &_breed)
{
  breed = _breed;
}

void Dog::bark() const
{
  std::cout << "Woof! Woof!" << std::endl;
}

//oveerriding
void Dog::toString() const
{
  std::cout << "toString method of the Dog class worked!" << std::endl;
}