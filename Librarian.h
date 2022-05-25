#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include<iostream>
#include <string>   
#include<fstream>
#include <stack>
#include"Person.h"
#include"Library.h"
#include"User.h"
#include "Database.h"

using namespace std;

class Librarian : protected User
{
    private:
    string _ID = "Librarian";//default ID
    int _Password = 123456;//default password
    ifstream fin;
    ofstream fout;


    string title, author;
    int year, count;


    public:
        Librarian();
        void change_account(string ID, int PW);//allow the librarian to change the ID and password
        void display(Book *list_of_books);//export a file consist of all the book
        //void search();
        void Add(string _title, string _author, int _year,int count,Book *list_of_books);// enter the title, author and year of publication to add the book in the book class
        void Delete(string _title,Book *list_of_books); // enter the title to delete the book
        void Update(string _title,string c_title,string c_author, int c_year, int count,Book *list_of_books); // enter the book title,author and year of publication, then enter the 3 parameter again for the updated ver

        //return the librarian's ID and password
        string get_ID();//return ID
        int get_password();//return Password

        //return the due book for all user
        void display_due();

        //add a count (+1) to due count or lost count to the user
        void add_due(string username);
        void add_lost(string username);


        

};

#endif