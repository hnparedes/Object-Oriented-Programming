#include <iostream>

class Person
{
  private:
    std::string fName, lName;
    int age;

  public:
    Person()
    {
      fName = "John";
      lName = "Doe";
      age = 0;
    }

    Person(const std::string & _fName, const std::string & _lName, int _age)
    {
      setFName(_fName);
      setLName(_lName);
      setAge(_age);
    }

    std::string getFName() const
    {
      return fName;
    }

    std::string getLName() const
    {
      return lName;
    }

    int getAge() const
    {
      return age;
    }

    void setFName(const std::string & _fName)
    {
      fName = _fName;
    }

    void setLName(const std::string & _lName)
    {
      lName = _lName;
    }

    void setAge(int _age)
    {
      if(_age >= 0)
        age = _age;
      else
        age = 0;
    }

    void print()
    {
      std::cout << "First Name: " << fName << std::endl;
      std::cout << "Last Name: " << lName << std::endl;
      std::cout << "Age: " << age << std::endl;
    }
};

class Employer
{
  private:
    Person person;
    double salary;

  public:
    Employer()
    {
      salary = 0;
    }

    Employer(const std::string & _fName, const std::string & _lName, int _age, double _salary)
    {
      person.setFName(_fName);
      person.setLName(_lName);
      person.setAge(_age);
      setSalary(_salary);
    }

    Person getPerson() const
    {
      return person;
    }

    double getSalary() const
    {
      return salary;
    }

    void setSalary(double _salary)
    {
      if(_salary >= 0)
        salary = _salary;
      else
        salary = 0;
    }

    void print()
    {
      person.print();
      std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
  Employer e1("John", "Doe", 30, 1000);

  Employer e2("sdfasfjkas", "siafjias", 42, 2000);

  e2.print();
  
}