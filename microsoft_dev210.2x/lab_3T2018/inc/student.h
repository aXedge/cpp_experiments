//#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "person.h"

class Student :
        public Person
{
    public:
        Student();
        ~Student();
        void SetAge(int);
        int GetAge();
        void SayHello();
        virtual void OutputIdentity();
        virtual void OutputAge();
};

#endif /* ifndef __STUDENT_H__ */

