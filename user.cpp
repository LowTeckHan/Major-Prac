#include "user.h"
void user::locksystem(){
		Display input;
		cout<<"\n\t\t\tACCOUNT\n";
    	char n;
      	cout<<"\n1)SIGNUP\n2)LOGIN\n3)BACK";
      	cout<<"\nEnter the choice....";
      	cin>>n;
    		switch(n){	
    		case '1':
    			system("cls");
  				user::signup();
  			break;
    		case '2':
     			system("cls");
  				user::login();
    		break;
    		case '3':
    			system("cls");
    			input.mainmenu();
    		default:
    			system("cls");
    			user::locksystem();
    		}
}

void user::login(){
				cout<<"\n\t\t\tLOGIN\n";
			int count=0,n,i=0,count1=0;
		    cout<<"Enter the Email:";
			cin>>localemail;
			cout<<"Enter the password :";
			cin>>localpassword;
				ifstream fin;
  			fin.open("students.txt");
			while(getline(fin,email)){
				if(localemail==email){
				    count++;
          			 }}
          			fin.close();
          		ifstream fin1;
  			   fin1.open("students.txt");
          		while(getline(fin1,password)){
				if(localpassword==password){
				    count1++;
				    
          			 }  }
          			 fin1.close();
            if(count>0&&count1>0){
            		cout<<"you login";}
			else{
				    system("cls");
				    cout<<"\nInvalid!!. Name or Password";
				    cout<<"\npress any key to go back...";
				   	getch();
					system("cls");
					user::locksystem();}
}

void user::signup(){
	                                      // using filing
			printf("\n\t\t\tSIGNUP\n");
			Display input;
   			int count=0,n,c,i=0;
   			ifstream fin;
    		fin.open("students.txt");
    		fflush(stdin);
    		cout<<"Enter the Email:";
    		cin>>localemail;
    		while(getline(fin,email)){		
  				if(email==localemail)
  				count++;}
  				fin.close();
  			if(count>0){
  				system("cls");
  				cout<<"\nEmail already Exit!";
    			cout<<"\nEnter.... \n1)Again signup\n2)mainmenu\n3)login\n";
    			cin>>n;
    			if(n==1){
    				system("cls");
  					user::signup();}
  				else if(n==2){	
 					system("cls");
  					input.mainmenu(); }
 
  				else{
    				system ("cls");  
  					user::login(); } }
               else{
  					email=localemail;
  					ofstream fout;
    				fout.open("students.txt",ios::app);
  					cout<<"Enter the password:";
  					cin>>password;
  					fout<<email;
  					fout<<"\n";
  					fout<<password;
  					fout<<"\n";
  					fout.close();
  					cout<<"\n\t\t\tSUCCESSFULLY FORMED ACCOUNT\n";
  					cout<<"\nEnter any key to go back.......";
  					getch();
  					system("cls");
  					user::locksystem();}
}
