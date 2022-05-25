#ifndef BOOK_H
#define BOOK_H
#include<string>
#include <iostream>


using namespace std;

class Book
{
    protected:
        string title;
        string author;
        int year;
        int count;

    public:
        Book();
        Book(string title, string author, int year, int count);//add a book with these info
        //void set_book();
        

        string get_title();//return title
        string get_author();//return author name
        int get_year();//return year
        int get_count();//return the amount of this book left


};

#endif