#ifndef STUDENTBOOK_H
#define STUDENTBOOK_H

#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h>
#include"liberainbooks.h"
#include"liberaien.h"
#include"user.h"
#include"Book.h"

#include"Display.h"
#include"person.h"

using namespace std;

class studentbook:public Book
{
	public:                                            // liberarin Books inherit From abstract book
	  void viewbook();                                   //polymorphism,single inheritance,filing
	  void searchbook();                                  
	  void issuebbook();
	  void feedback();
	  void returnbook();
};
#endif
