#include <iostream>
#include <string>
#include "Library.h"
#include "User.h"
#include"Person.h"
#include"Librarian.h"
#include "Database.h"
#include"Book.h"
using namespace std;

int main()
{
    Library library;
    Librarian Librarian;
    Person person1 ;
    User user1,user2,user3;
    Database data;
    Book *list_of_books = data.return_list_book();

    
    string *user = new string;
    int *pw = new int;

    data.set_book();
    //person1.display_due();

    int action,user_action,librarian_action;
    

    int i;
//loop the program until quite
for (i=0;i<10;i++)
{
    //select the options, it will 
    cout<<"select action: "<<endl;
    cout<<"1 = register"<<endl
        <<"2 = login"<<endl
        <<"3 = quit"<<endl;
        cin>> action;

        if (action == 1)//make an account
        {
            cout<<"Enter user name and pw"<<endl;
            cin >>*user;
            cin >>*pw;
            person1.setName(*user);
            person1.setPassword(*pw);

            user1.AddUser(person1);
        }

        else if(action == 2)//login
        {
            //prompt the user to enter username and password
            cout<<"->Please Enter your account info "<<endl;
            cout<<"ID: ";
            cin>>*user;
            cout<<"Password: ";
            cin>>*pw;
            if(library.Login(*user,*pw)==1)//when librarian's ID and Password is input 
            {   
                //display librarian's options
                cout<<"Librarian command: "<<endl
                
                    <<"1 = Change account's ID & Password "<<endl
                    <<"2 = Add a book into the library"<<endl
                    <<"3 = Delete a book in the library"<<endl
                    <<"4 = Update a book in the library"<<endl
                    <<"5 = Add a due book into the sudent's account"<<endl
                    <<"6 = Add a lost book into student's account"<<endl
                    <<"7 = Display all user and their due book"<<endl
                    <<"8 = Get a booklist file"<<endl
                    <<"9 = Quit"<<endl

                    <<"Enter your action"<<endl;

                switch(librarian_action)
                {   
                    case 1:
                    {   string librarian_name;
                        int Password;
                        cout<<"Enter your new ID and Password"<<endl;
                        cin >>librarian_name;
                        cin >>Password;
                        Librarian.change_account(librarian_name, Password);
                        break;
                    }

                    case 2:
                    {
                        string temp_title,temp_author;
                        int temp_year, temp_count;
                        cout<<"Please enter the title, name of the author, the publication year and the amount of books"<<endl
                            <<"Title: ";
                        cin >>temp_title;
                        cout<<endl<<"Name of the author: ";
                        cin >>temp_author;
                        cout<<endl<<"The year of publication: ";
                        cin >>temp_year;
                        cout<<endl<<"The amount of books";
                        cin >>temp_count;
                        cout<<endl;
                        Librarian.Add(temp_title,temp_author,temp_year,temp_count,list_of_books);
                        break;
                    }

                    case 3:
                    {   
                        string book_del;
                        cout<<"Please enter the name of the book to be deleted"<<endl;
                        cin >>book_del;

                        Librarian.Delete(book_del, list_of_books);
                        
                        break;
                    }

                    case 4:
                    {
                        string book_title, new_title, new_author;
                        int new_year, new_count;

                        cout<<"Please enter the book you wants to update, and the updated information"<<endl;
                        cout<<"The book: ";
                        cin >>book_title;
                        cout<<endl<<"The title: ";
                        cin >>new_title;
                        cout<<endl<<"Name of the author: ";
                        cin >>new_author;
                        cout<<endl<<"The year of publication: ";
                        cin >>new_year;
                        cout<<endl<<"The amount of books";
                        cin >>new_count;
                        cout<<endl;

                        Librarian.Update(book_title, new_title, new_author,new_year,new_count, list_of_books);

                        break;

                    }

                    case 5:
                    {   
                        string name;
                        cout<<"Enter the User's name to increase their due book"<<endl;
                        cin >>name;
                        Librarian.add_due(name);
                        break;
                    }

                    case 6:
                    {
                        string name;
                        cout<<"Enter the User's name to increase their lost book"<<endl;
                        cin >>name;
                        Librarian.add_lost(name);
                        break;
                    }

                    case 7:
                    {
                        Librarian.display_due();
                        break;
                    }

                    case 8:
                    {
                        Librarian.display(list_of_books);
                        break;
                    }

                    case 9:
                    {
                        i=1000;
                        break;
                    }
                }
            }


            else if(library.Login(*user,*pw)==0)//if the User's ID and Password is inputed
            {
                for(int i=0;i<1000;i++)
                {
                    user1.verify(*user, *pw);//verify the ID and Password
                    cout<<"User command: "<<endl  

                        <<"1 = Show the list of books"<<endl
                        <<"2 = Get the information on the books"<<endl
                        <<"3 = borrow a book"<<endl
                        <<"4 = Show user's fine"<<endl
                        <<"5 = Show the user's due book"<<endl
                        <<"6 = Quit"<<endl

                        <<"Enter your action: "<<endl;
                    cin>>user_action; 

                    switch(user_action)
                    {    
                        case 1:
                        {
                            for (int i=0;i<10;i++)
                            {
                                cout<<i << ":"
                                    <<"Book title = "<< list_of_books[i].get_title()<<endl
                                    <<"Book author = "<< list_of_books[i].get_author()<<endl
                                    <<"Book publication year = " <<list_of_books[i].get_year()<<endl;
                            }
                            break;
                        }

                        case 2:
                        {
                            string title;
                            cout<<"Please enter the book's title: ";
                            cin >>title;
                            user1.get_book_info(title);
                            break;
                        }

                        case 3:
                        {
                            int book_number;   
                            cout<<"Please enter the book's number"<<endl;
                            cin>>book_number;
                            user1.get_book(list_of_books[book_number]);
                            break;
                        }

                        case 4:
                        {
                            cout<<user1.cal_fine()<<endl;
                            break;
                        }

                        case 5:
                        {
                            user1.display_due_user();
                            break;
                        }        

                        case 6:
                        {
                            i=1000;
                            break;
                        }       
                    }
                }                

            }
        }

        else if(action ==3)//end the loop
        {
            i=1000;
            cout<<"Goodbye!"<<endl;
        }

        else //if the user input something else
        {
            cout<<"not a correct option!"<<endl;
        }

}



return 0;
}