#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<conio.h>
#include"liberainbooks.h"
#include"liberaien.h"
#include"user.h"
#include"studentbook.h"
#include"Display.h"
#include"person.h"

using namespace std;

class Book                                             // Abstract Book Class
{                                                     // pure virtual funcations
    	public:
	string title,author,publication_year,id;
	    virtual void viewbook()=0;                        //
        virtual void issuebbook()=0;
    	virtual void searchbook()=0;
        virtual void feedback()=0;
	
};

#endif
