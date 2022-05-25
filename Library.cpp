#include <iostream>
#include <string>
#include "Library.h"
#include "User.h"
#include "Person.h"
#include"Librarian.h"

using namespace std;



Library::Library()
{

    
}


int Library::Login(string enter_username,int enter_password)
{   
    int return_code;
    //verify the username and password
    Librarian Librarian;
    User user;
    if(enter_username==Librarian.get_ID())
    {
        if(enter_password==Librarian.get_password())
        {
            return_code= 1;
        }
    }
    else
    {
        return_code= 0;;
    }

    return return_code;
}





