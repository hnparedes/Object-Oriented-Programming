#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
private:
  std::string hairColor;

public:
  Mammal();
  Mammal(const std::string &_hairColor);
  Mammal(int _age, double _weight, const std::string &_hairColor,
         const std::string &_diet);

  ~Mammal();

  std::string getHairColor() const;
  void setHairColor(const std::string &_hairColor);

  //For protected data fields from parent class
  void setDiet(const std::string &_diet);
  std::string getDiet() const;

  //Method for Mammal class
  void liveBirth() const;

  //If you do not override it, Mammal class will be also abstract
  //void toString() const;
};
#endif