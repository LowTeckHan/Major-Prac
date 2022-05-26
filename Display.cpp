#include "Display.h"

void Display::display(){
	system("cls");
		system("color F8");
		cout<<"\n\n\t\t####################################################\n";
		cout<<"\t\t#######                                    #########\n";
		cout<<"\t\t#######   WELL COME TO DIGITAL LIBRARY     #########\n";
		cout<<"\t\t#######                                    #########\n";
		cout<<"\t\t####################################################\n";
		cout<<"\t\t--------------------------------------------------------\n";
		cout<<"\t\t\t\t\tMAIN MENU\n";
		cout<<"\t\t--------------------------------------------------------";
}

void Display::featuresL(){
		system("cls");
		liberainbooks *input=new liberainbooks ;    // dynamically create object
 		cout<<"\n\t\t\t\tFEATURES";
		char n;
		cout<<"\n1)ADD BOOKS\n2)VIEW BOOK\n3)UPDATE BOOK\n4)SEARCH BOOK\n5)REMOVE BOOKS\n6)ISSUED BOOK RECORD\n7)STUDENT FEEDBACK\n8)MAINMENU";
		cout<<"\nEnter the choice...";
		cin>>n;
			switch(n){
			case '1':
				system("cls");
			  input->addbook();
			break;
			case '2':
				system("cls");
   				input->viewbook();
			break;
			case '3':
				system("cls");
				input->updatebook();
			break;
			case  '4':
				system("cls");
				input->searchbook();
			break;
			case '5':
				system("cls");
				input->Removebook();
			break;
			case '6':
				system("cls");
				input->issuebbook();
			break;
			case '7':
				system("cls");
				input->feedback();
			break;
			case '8':
				system("CLS");
   				Display::mainmenu();
			break;
			default:
				system("CLS");
   				Display::featuresL();}
        cout<<"Press any key for go back....";
        getch();
        system("cls");
       	Display::featuresL();
       	delete input;
}

void Display::mainmenu(){
		liberaien *input =new liberaien;    // dynamically create object
	   user *input2=new user;
		char n;
		cout<<"\n1)LIBRARIAN\n2)STUDENT\n3)EXIT";                           
		cout<<"\nEnter the choice...";
		fflush(stdin);
		cin>>n;
		switch(n){
		case '1':
			system("cls");
    		input->locksystem();
			Display::featuresL();
		break;
		case '2':
			system("cls");
			input2->locksystem();
			Display::featuresS();
		break;
		case '3':
			exit(0);
		break;
		default:
			system("cls");
			Display::display();
			Display::mainmenu();}
			delete input;                   //delete both object
			delete input2;  
}

void Display::featuresS(){
	liberainbooks  *input=new liberainbooks  ;     // dynamically create object
	studentbook *input2=new 	studentbook;                  // features of students
		system("cls");
   		cout<<"\n\t\t\t\t\tFEATURES\n";
   		char n;
  		cout<<"\n1)VIEW BOOK\n2)SEARCHBOOK\n3)ISSUES BOOKS\n4)FEEDBACK\n5)RETURN BOOKS\n6)MAINMENU";
  		cout<<"\nEnter the choice.....";
  		cin>>n;
  			switch(n){
  			case '1':
  				system("cls");
  				input->viewbook();
  			break;
  			case '2':
  				system("cls");
  				input2->searchbook();
  			break;
  			case '3':
  				system("cls");
  				input2->issuebbook();
  			break;
  			case '4':
  				system("cls");
  				input2->feedback();
   			break;
  			case '5':
  				system("cls");
  				input2->returnbook();
  			case '6':
  				system("cls");
   				Display::mainmenu();
  			default:
  				system("cls");
  				Display::featuresS();}
 
  		cout<<"press any key to go back";
  		getch();
  		Display::featuresS();
  		delete input;
  		delete input2;
}
