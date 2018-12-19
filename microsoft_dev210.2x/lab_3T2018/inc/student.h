//#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "Person.h"
class Student :
        public Person
{
    public:
        Student();
        ~Student();
    
        void setAge(int);
        int getAge();
        void SayHello();
	virtual void OutputIdentity();
	virtual void OutputAge();
};

#endif /* ifndef __STUDENT_H__ */

