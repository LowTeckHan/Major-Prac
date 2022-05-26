#ifndef PERSON_H
#define PERSON_H

#include<iostream>                       // Registration header file
using namespace  std;
class person
{
	public:
	string email,password,localemail,localpassword;   //#abstraction
    virtual	void signup()=0;            // Abstract person class in which 3 public funcation and 4 string type varible decalare
    virtual void login()=0;
    virtual void locksystem()=0;
};


#endif
