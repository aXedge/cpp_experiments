#include "student.h"
#include <iostream>

class Teacher :
        public Person
{
    public:
        Teacher() {};
        ~Teacher() {
            std::cout << __func__ << " Destructor called as a result of the delete keyword being used" << std::endl;
        };

        void setAge(int);
        int getAge();
        void SayHello();
    virtual void OutputIdentity();
    virtual void OutputAge();
};

void Teacher::OutputIdentity( void )
{
    std::cout << "I am a teacher" << std::endl;
}

void Teacher::OutputAge( void )
{
    OutputIdentity();
    std::cout << " and ";
    Person::OutputAge();
}

int main (void)
{
    Student stud_01;
    Teacher teach_01;

    stud_01.SetFirstName("Student");
    stud_01.SetLastName("01");
    stud_01.SetAge(10);
    stud_01.OutputIdentity();
    stud_01.OutputAge();

    teach_01.SetFirstName("Teacher");
    teach_01.SetLastName("01");
    teach_01.SetAge(40);
    teach_01.OutputIdentity();
    teach_01.OutputAge();

    return 0;
}
