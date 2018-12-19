//#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>

#define MAX_PHONE_DIGITS	10
class Person
{
    private:
        std::string 	first_name;
        std::string 	last_name;
        std::string 	race;
        int 		age;

    protected:
    int		phone_number[MAX_PHONE_DIGITS];

    public:
        Person();

        Person(std::string fName, std::string lName);

        Person(std::string fName, std::string lName, int age);

        ~Person();

        void SetFirstName(std::string fName);
        std::string GetFirstName();

        void SetLastName(std::string lName);
        std::string GetLastName();

        void SetAge( int );
        int GetAge( void );

        void SayHello();

    virtual void OutputIdentity() = 0;

    virtual void OutputAge();

};

#endif /* ifndef __PERSON_H__ */

