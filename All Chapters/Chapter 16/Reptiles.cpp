#include "Reptiles.h"

Reptiles::Reptiles() { setScaleSize(1.5); }

Reptiles::Reptiles(double _scaleSize) { setScaleSize(_scaleSize); }

Reptiles::Reptiles(int _age, double _weight, double _scaleSize,
                   const std::string &_diet)
    : Animal(_age, _weight, _diet) {
  setScaleSize(_scaleSize);
}

Reptiles::~Reptiles() {
  std::cout << "Reptiles object with age " << getAge() << " and weight "
            << getWeight() << " is being destroyed" << std::endl;
}

void Reptiles::setDiet(const std::string &_diet)
{
  diet = _diet;
}

std::string Reptiles::getDiet() const
{
  return diet;
}

void Reptiles::setScaleSize(double _scaleSize)
{
  scaleSize = _scaleSize;
}

double Reptiles::getScaleSize() const
{
  return scaleSize;
}

void Reptiles::sheddingSkin() const
{
  std::cout << "Reptiles is shedding skin" << std::endl;
}

// Overriding
void Reptiles::toString() const
{
  std::cout << "toString method of the Reptiles class worked!" << std::endl;
}