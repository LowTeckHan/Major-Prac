#ifndef PERSON_H
#define PERSON_H   
#include<iostream>
#include <string>
#include "Library.h"
//#include "User.h"


using namespace std;

class Person
{
    protected:
        static int usercount;    
        string user_name;
        int password;
        

    public:
        Person();
        void Register();//prompt the user to register a new account and save the username & password
        void setName(string name);//save the username
        void setPassword(int pw);//save the password
        string getName();  //return the username
        int getPassword();//return the password
        int getUsercount();//return the number of user

        void display_due();//display the due book

         void add_due_count();//add a due count
         void add_lost_count();//add a lost count
         virtual ~Person();//virtual destructor

};

#endif