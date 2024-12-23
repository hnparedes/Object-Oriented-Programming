#ifndef DOG_H
#define DOG_H

#include "Mammal.h"

class Dog : public Mammal
{
  private:
    std::string breed;

  public:
    Dog();
    Dog(const std::string &_hairColor, const std::string &_breed);
    Dog(int _age, double _weight, const std::string &_hairColor, const std::string &_breed, const std::string &_diet);

    ~Dog();

    std::string getBreed() const;
    void setBreed(const std::string &_breed);

    //Method for Dog class
    void bark() const;

    //overriding, so Dog class will not be an abstract class
    void toString() const;
};

#endif