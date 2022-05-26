#ifndef USER_H
#define USER_H


#include<iostream>
#include<conio.h>
#include"liberainbooks.h"
#include"liberaien.h"
#include"Book.h"
#include"Display.h"
#include"person.h"

using namespace std;

class user:public person
{                                   //single inheritance,polymorphism,filing
    public:                       // user class inherit from abstract person class 
	void signup();                   // override funcation from person class achive polyemorphism     
    void login();
    void locksystem();
};

#endif
