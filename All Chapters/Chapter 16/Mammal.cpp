#include "Mammal.h"

Mammal::Mammal()
{
  setHairColor("Brown");
}

Mammal::Mammal(const std::string &_hairColor)
{
  setHairColor(_hairColor);
}

Mammal::Mammal(int _age, double _weight, const std::string &_hairColor, const std::string &_diet) : Animal(_age, _weight, _diet)
{
  setHairColor(_hairColor);
}

Mammal::~Mammal()
{
  std::cout << "Mammal object with age " << getAge() << " and weight " << getWeight() << " is being destroyed" << std::endl;
}

std::string Mammal::getHairColor() const
{
  return hairColor;
}

void Mammal::setHairColor(const std::string &_hairColor)
{
  hairColor = _hairColor;
}

void Mammal::setDiet(const std::string &_diet)
{
  diet = _diet;
}

std::string Mammal::getDiet() const
{
  return diet;
}

void Mammal::liveBirth() const
{
  std::cout << "Mammal is giving birth" << std::endl;
}