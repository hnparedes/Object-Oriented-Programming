#include "Fish.h"

Fish::Fish()
{
  setWaterType("Fresh Water");
}

Fish::Fish(const std::string &_waterType)
{
  setWaterType(_waterType);
}

Fish::Fish(int _age, double _weight, const std::string &_waterType, const std::string &_diet) : Animal(_age, _weight, _diet)
{
  setWaterType(_waterType);
}

Fish::~Fish()
{
    std::cout << "Fish object with age " << getAge() << " and weight " << getWeight() << " is being destroyed" << std::endl;
}

std::string Fish::getWaterType() const
{
  return waterType;
}

void Fish::setWaterType(const std::string &_waterType)
{
  waterType = _waterType;
}

void Fish::setDiet(const std::string &_diet)
{
  diet = _diet;
}

std::string Fish::getDiet() const
{
  return diet;
}

void Fish::eggLaying() const
{
  std::cout << "Fish is laying eggs" << std::endl;
}

//Overriding
void Fish::toString() const
{
  std::cout << "toString method of the Fish class worked!" << std::endl;
}