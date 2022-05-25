#include <iostream>
#include <string>
#include "Library.h"
#include "User.h"
#include"Person.h"


using namespace std;

User::User()
{
    user = new Person[5];
    usercount =0;
    //cout<<"user here"<<endl;
}

void User::verify(string username, int password)// to check if the username and password exist in the library, return nothing if both exist
{
    for(int i=0; i<5;i++)
    {
        if(User::user[i].getName()==username)
        {
            if(User::user[i].getPassword()==password)
            {
                cout<<"Welcome!"<<endl;
                i=5;
            }

            else
            {
                cout<<"Incorrect password!"<<endl;
            }
        }

        else if(User::user[4].getName()!=username)
        {
            cout<<"Incorrect username!"<<endl;
        }


    }
}

void User::get_book(Book bookA)//add a book to the borrowed book
{
    if(borrowed_count <5)
    {
        book[borrowed_count]=bookA;
        borrowed_count ++;
    }
    else
    {
        cout<<"Over the borrowed limit!"<<endl;
    }
}


void User::get_book_info(string title)//return book's info
{
    for(int i=0;i<10;i++)
    {
        if(book[i].get_title()==title)
        {
            cout<<"Book title: "<<book[i].get_title()<<endl
                <<"Book author: "<<book[i].get_author()<<endl
                <<"Book publication year: "<<book[i].get_year()<<endl
                <<"Number of books avaliable: "<<book[i].get_count()<<endl;
        }
    }

}

int User::cal_fine()// calculate the fine
{
    int fine =0;
    fine =lost_count*10 + due_count *5;
    return fine;
}


void User::check(string username)//return cal_fine
{
    User user;

    cout<<"Your total fine is : AUD"<<user.cal_fine()<<endl;  
}


void User::return_book()//return all the books
{
   delete book;
}

void User::display_due_user()//display the due book
{
    for(int i=0; i<5; i++)
    {
        cout<<due_book[i]<<endl;
    }
}

void User::AddUser(Person account)//add a person as an aoccount
{
    if(usercount <3)
        {
            user[usercount]=account;
            usercount++;
        }
    else
    {
        cout<<"max account reached!"<<endl;
    }
}

void User::add_due_count()//add one to due count
{
     due_count++;
}

void User::add_lost_count()//add 1 to lost count
{
     lost_count++;
}

