#include <iostream>
#include <string>
#include "Library.h"
#include "User.h"
#include "Person.h"

using namespace std;

int Person::usercount=0;

Person::Person()
{
    usercount++;
    //Person *user_name = new Person;
    //Person *password = new Person;
    
}



void Person::Register()
{   
    if(usercount !=5)
    {
        cout<<"enter the username and password :"<<endl;//cout a message for user to enter name & password

        string username;//string to store username
        int password;//int to store password

        cin>>username;//prompt the user to enter username
        cin>>password;//prompt the user to enter password

        cout<<"here"<<endl;

        Person *person = new Person;
        User account;
        person->setName(username);//save the username
        person->setPassword(password);//save the password

        cout<<"here1"<<endl;

        account.AddUser(*person);

        cout<<"here3"<<endl;

        cout<<"Account created!"<<endl;


    }
    else
    {
        cout<<"User capacity reached!"<<endl;
    }
}

string Person::getName()//return user name
{
    return Person::user_name;
}  

int Person::getPassword()//return user password
{
    return Person::password;
}

int Person::getUsercount()//return user count
{
    return Person::usercount;
}

void Person::setName(string user_name_input)//set the username
{
    Person::user_name=user_name_input;
}

void Person::setPassword(int password_input)//set the user password
{
    Person::password=password_input;
}

void Person::display_due()//display due book
{
    User user_due;
    user_due.display_due_user();
    
}


Person::~Person()
{

}

void Person::add_due_count()
{

}

void Person::add_lost_count()
{
    
}