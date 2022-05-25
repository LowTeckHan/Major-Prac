#include <iostream>
#include <string>
#include "Librarian.h"
#include "Library.h"
#include"Book.h"

Book::Book()
{

}



Book::Book(string _title, string _author, int _year, int _count)//set the book's info
{
    this->title = _title;
    this->author = _author;
    this->year = _year;
    this->count = _count;
}

string Book::get_title()//return title
{
    return title;
}

string Book::get_author()//return author name
{
    return author;
}

int Book::get_year()//return year
{
    return year;
}

int Book::get_count()//return book amount
{
    return count;
}