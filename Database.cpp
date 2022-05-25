#include <iostream>
#include "Database.h"
#include"fstream"


Database::Database()
{
    
}
void Database::set_book()//set book in the database from a .txt file
{
    ifstream fin;
    fin.open("Booklist.txt");
        string title, author;
        int year,count;

    for (int i=0; i<10; i++)
    {       

        fin>>title>>author>>year>>count;

        Book Book(title, author, year,count);
        List_book[i]=Book;
    }



}

Book *Database::return_list_book()
{
    return List_book;
}

