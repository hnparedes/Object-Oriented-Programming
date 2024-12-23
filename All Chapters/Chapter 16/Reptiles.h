#ifndef REPTILES_H
#define REPTILES_H

#include "Animal.h"

class Reptiles : public Animal
{
  private:
    double scaleSize;

  public:
    Reptiles();
    Reptiles(double _scaleSize);
    Reptiles(int _age, double _weight, double _scaleSize, const std::string &_diet);

    ~Reptiles();

    //For protected data fields from parent class
    void setDiet(const std::string &_diet);
    std::string getDiet() const;

    void setScaleSize(double _scaleSize);
    double getScaleSize() const;

    //Method for Reptiles class
    void sheddingSkin() const;

    // Overriding
    void toString() const;
};

#endif