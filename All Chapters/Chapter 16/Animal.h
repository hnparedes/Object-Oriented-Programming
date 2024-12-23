#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

// Abstract Class
class Animal
{
  private:
    int age;
    double weight;

  protected:
    std::string diet;

  public:
    Animal();
    Animal(int _age, double _weight, const std::string & _diet);

    ~Animal();

    int getAge() const;
    double getWeight() const;

    void setAge(int _age);
    void setWeight(double _weight);

    //Methods for Animals
    void eat() const;
    void sleep() const;

    //Pure Virtual method
    virtual void toString() const = 0;
};
#endif