#include "Person.h"
#include <iostream>


Person::Person()
{

}

Person::Person(std::string fName, std::string lName)
{
    first_name = fName;
    last_name = lName;
}

Person::Person(std::string fName, std::string lName, int age)
{
    first_name = fName;
    last_name = lName;
    age = age;
}


Person::~Person()
{
    std::cout << __func__ << " Destructor called as a result of the delete keyword being used" << std::endl;
}

void Person::SetFirstName(std::string fName)
{
    this->first_name = fName;
}

std::string Person::GetFirstName()
{
    return this->first_name;
}

void Person::SetLastName(std::string lName)
{
    this->last_name = lName;
}

std::string Person::GetLastName()
{
    return this->last_name;
}

void Person::SetAge( int age )
{
    this->age = age;
}

int Person::GetAge( void )
{
    return this->age;
}

void Person::SayHello()
{
    std::cout << "Hello" << std::endl;
}

void Person::OutputAge()
{
    std::cout << "I am " << this->age << " years old" << std::endl;
}
