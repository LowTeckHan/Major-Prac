#include <iostream>
#include <string>
#include<iomanip>
#include "Library.h"
#include "User.h"
#include "Person.h"
#include"Librarian.h"
#include"Database.h"
#include"Book.h"

using namespace std;

Librarian::Librarian()
{

}

void Librarian::change_account(string ID, int PW)//change the ID and Password of the librarian
{
    _ID = ID;
    _Password = PW;
}

string Librarian::get_ID()//return ID
{
    return _ID;
}

int Librarian::get_password()//return Password
{
    return _Password;
}

void Librarian::display_due()//return the due book of the user
{
    for(int i=0;i<5;i++)
    {
        cout<<User::user[i].getName()<<" : ";
        User::user[i].display_due();
    }
}

void Librarian::Add(string title, string author, int year,int count,Book *list_of_books)//add a book 
{
    for(int i=0; i<10;i++)
    {
        if(list_of_books[i].get_title()=="Null")
        {
            Book book(title,author,year,count);
            list_of_books[i]=book;
            i=10;
        }
        else
        {
            cout<<"The library is full!"<<endl;
        }
    }
}

void Librarian::Delete(string _title,Book *list_of_books)//delete a book
{
    for(int i=0; i<10;i++)
    {         
    if(list_of_books[i].get_title()==_title)
    {  
        Book book("Null","Null",0,0);

        list_of_books[i]=book;

        cout<<list_of_books[i].get_title();

        i=10;

        
    }
    else
    {
        cout<<"No Book with the title is founded!"<<endl;    
    }
    }
}

void Librarian::Update(string _title, string c_title,string c_author, int c_year, int c_count,Book *list_of_books)//update a book, it search by book title, and replace the array with a new set of info
{
    //Database database;
    //Book *list_of_books = database.return_list_book();
    for(int i=0; i<10;i++)
    {         
    if(list_of_books[i].get_title()==_title)
    {  
        Book book(c_title, c_author, c_year, c_count);

        list_of_books[i]=book;

        cout<<list_of_books[i].get_title();

        i=10;

        
    }
    else
    {
        cout<<"No Book with the title is founded"<<endl;    
    }
    }
}


void Librarian::add_due(string username)//add a due cout to the user
{
    for(int i=0; i<3;i++)
    {
        if(User::user[i].getName()==username)
        {
            user[i].add_due_count();
            i=3;
        }
    }
}

void Librarian::add_lost(string username)//add a lost count to the user
{
    for(int i=0; i<3;i++)
    {
        if(User::user[i].getName()==username)
        {
            user[i].add_lost_count();
            i=3;
        }
    }
}

void Librarian::display(Book *list_of_books)//display the book, output a .txt file
{
    fout.open("Booklist.txt");
    fout<<"Title"<<setw(20)<<"Author"<<setw(10)<<"Year of publication"<<setw(10)<<"Amount of books"<<endl;
    for (int i=0; i<10; i++)
    {
        fout<<list_of_books[i].get_title()<<setw(20)
        <<list_of_books[i].get_author()<<setw(10)
        <<list_of_books[i].get_year()<<setw(10)
        <<list_of_books[i].get_count()<<endl;
    
    }
}


