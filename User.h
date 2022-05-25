#ifndef USER_H
#define USER_H
#include<iostream>
#include <string>   
#include"Person.h"
#include"Library.h"
#include"Book.h"

using namespace std;

class User:protected Person
{
    protected:
    Book *book = new Book[5];
    string lost_book[5];
    string due_book[5];

    int due_count = 0;
    int lost_count = 0;
    int borrowed_count =0;

    Person *user;



    public:
        User();
        void verify(string username, int password);// verify if the username and password is in the system

        void get_book(Book); //add a book in the borrowed_book array
        void get_book_info(string name); //search the book and return a list of books with the info due date, lost fine, due fine

        int cal_fine(); // calculate the amount of fine
        void check(string username); // return the user's fine amount

        void return_book();//to return the book to the library

        void display_due_user();//display the due book of the student

        void AddUser(Person name);//add a user

        void add_lost_count();// add 1 to lost count
        void add_due_count();// add 1 to due count
        



};

#endif