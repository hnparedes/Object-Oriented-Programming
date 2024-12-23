#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
private:
  std::string waterType;

public:
  Fish();
  Fish(const std::string &_waterType);
  Fish(int _age, double _weight, const std::string &_waterType,
       const std::string &_diet);

  ~Fish();

  std::string getWaterType() const;
  void setWaterType(const std::string &_waterType);

  //For protected data fields from parent class
  void setDiet(const std::string &_diet);
  std::string getDiet() const;

  //Method for Fish class 
  void eggLaying() const;

  // Overriding
  void toString() const;
};

#endif