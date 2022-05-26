#ifndef LIBERAIEN_H
#define LIBERAIEN_H

#include<iostream>
#include<conio.h>
#include"liberainbooks.h"
#include"user.h"
#include"Book.h"
#include"Display.h"
#include"person.h"

using namespace std;
class liberaien:public person       
{
	                                   //single inheritance,polymorphism,filing
                                     // liberaien class public inherit from abstract person class
	public:
	void signup();                    // override funcation from person class achive polyemorphism
    void login();	
    void locksystem();
};

#endif
