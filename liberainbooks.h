#ifndef LIBERAINBOOKS_H
#define LIBERAINBOOKS_H


#include<iostream>
#include<conio.h>
#include"studentbook.h"
#include"liberaien.h"
#include"user.h"
#include"Book.h"
#include"Display.h"
#include"person.h"

using namespace std;

class liberainbooks:public Book                                 // liberarin Books inherit From abstract book
{                                                              //polymorphism,single inheritance,filing
	public:
     	 void viewbook();
         void searchbook();
         void issuebbook();
    	 void feedback();
	 	 void addbook();
         void updatebook();
    	 void Removebook();	
};

#endif
