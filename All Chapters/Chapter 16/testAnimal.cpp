#include "Dog.h"
#include "Fish.h"
#include "Reptiles.h"

using namespace std;

int main() {
  //You cannot create an object of Animal and Mammal classes (Abstract)
  //Animal ani1;
  //Mammal mam1;

  Reptiles r1;
  std::cout << "Weight: " << r1.getWeight() << std::endl;
  std::cout << "Age: " << r1.getAge() << std::endl;
  std::cout << "Diet: " << r1.getDiet() << std::endl;
  std::cout << "Scale Size: " << r1.getScaleSize() << std::endl;
  r1.eat();
  r1.sleep();
  // You can only call it from an Mammal object or it's children
  r1.sheddingSkin();
  r1.toString();

  std::cout << std::endl;
  
  Reptiles r2(10, 5.5, 1.5, "Carnivore");
  std::cout << "Weight: " << r2.getWeight() << std::endl;
  std::cout << "Age: " << r2.getAge() << std::endl;
  std::cout << "Diet: " << r2.getDiet() << std::endl;
  std::cout << "Scale Size: " << r2.getScaleSize() << std::endl;
  r2.eat();
  r2.sleep();
  r2.sheddingSkin();
  r2.toString();

  std::cout << std::endl;
  
  Fish f1;
  std::cout << "Weight: " << f1.getWeight() << std::endl;
  std::cout << "Age: " << f1.getAge() << std::endl;
  std::cout << "Diet: " << f1.getDiet() << std::endl;
  std::cout << "Water Type: " << f1.getWaterType() << std::endl;
  f1.eat();
  f1.sleep();
  f1.eggLaying();
  f1.toString();

  std::cout << std::endl;
  
  Fish f2(5, 0.5, "Freshwater", "Carnivore");
  std::cout << "Weight: " << f2.getWeight() << std::endl;
  std::cout << "Age: " << f2.getAge() << std::endl;
  std::cout << "Diet: " << f2.getDiet() << std::endl;
  std::cout << "Water Type: " << f2.getWaterType() << std::endl;
  f2.eat();
  f2.sleep();
  f1.eggLaying();
  f2.toString();

  std::cout << std::endl;
  
  Dog d1;
  std::cout << "Weight: " << d1.getWeight() << std::endl;
  std::cout << "Age: " << d1.getAge() << std::endl;
  std::cout << "Diet: " << d1.getDiet() << std::endl;
  std::cout << "Hair Color: " << d1.getHairColor() << std::endl;
  // You can only call it from a Dog Object
  std::cout << "Breed: " << d1.getBreed() << std::endl;
  d1.eat();
  d1.sleep();
  d1.liveBirth();
  // Only for Dog class
  d1.bark();
  d1.toString();

  std::cout << std::endl;

  std::cout << "-------Destructor Chaning Starts-------" << std::endl;

  return 0;
}