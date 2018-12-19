#include "student.h"
#include <iostream>

Student::Student()
{
}

Student::~Student()
{
    std::cout << __func__ << " Destructor called as a result of the delete keyword being used" << std::endl;
}

void Student::SetAge(int age)
{
    if (age < 5)
    {
        std::cout << "Student age needs to at least 5 years old." << std::endl;
    }
    else
    {
        //this->age = age;
        Person::SetAge( age );
    }
}

int Student::GetAge()
{
    return Person::GetAge();
}

void Student::SayHello()
{
    std::cout << "Hey, how's it goin'?" << std::endl;
}

void Student::OutputIdentity( void )
{
    std::cout << "I am a student" << std::endl;
}

void Student::OutputAge( void )
{
    OutputIdentity();
    std::cout << " and ";
    Person::OutputAge();
}
