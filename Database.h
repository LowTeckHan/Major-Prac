#ifndef DATABASE_H
#define DATABASE_H
#include "Book.h"

class Database:protected Book
{
    private:
        

    public:
        Database();
        void set_book();
        Book *List_book = new Book[10];

        Book *return_list_book();

        
        

};

#endif