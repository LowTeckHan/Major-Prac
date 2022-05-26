#include "liberaien.h"

void liberaien::locksystem(){
		Display input2;
		cout<<"\n\t\t\tACCOUNT\n";
    	char n;
      	cout<<"\n1)SIGNUP\n2)LOGIN\n3)BACK";
      	cout<<"\nEnter the choice....";
      	cin>>n;
    		switch(n){	
    		case '1':
    			 system("cls");
				  liberaien::signup();
  			break;
    		case '2':
     			system("cls");
  				liberaien::login();
    		break;
    		case '3':
    			system("cls");
    		    input2.mainmenu();
    		default:
    			 system("cls");
    			 liberaien::locksystem();}	
}

void liberaien::login(){
		                     //liberarien login system using filing compare data
				cout<<"\n\t\t\t\tLOGIN\n";
				int count=0,count1=0,choice,i=0;
				Display input;
   				cout<<"\nEnter the Email id:";
   				cin>>localemail;
        	    cout<<"\nEnter the password:";
        	    cin>>localpassword;
   				ifstream fin;
   				fin.open("admin.txt");
				while(getline(fin,email)){																
   					if(email==localemail)
   						count++;}
   				fin.close();
   				ifstream fin1;
   				fin.open("admin.txt");
				while(getline(fin,password)){																
   					if(password==localpassword)
   						count1++;}
   				fin.close();
  				if(count>0&&count1>0)
   					cout<<"Your are login\n";
				else{
   					system("cls");
   					cout<<"\nInvalid.Email or password!\n\n";
       				cout<<"press 1 for again login or 2 for back:";
       			   	cin>>choice;
       				if(choice==1){
       					system("cls");
       					liberaien::login();  }
       				else if (choice==2){
        				system("cls");
       					liberaien::locksystem();}
   
       				else {
    					system("cls");
    					cout<<"Invalid.choice!";
    					input.mainmenu(); }}
}

void liberaien::signup(){
	                       // signup system of liberaien using filing
                         // store data in admin file
                         /// if you want change admin than enter code 1342 for sefaty
	       Display input;
			cout<<"\n\t\t\t\tSIGNUP\n";
			int count=0,i=0,choice;
			string code="1342",n;
			char ch;
       		cout<<"Enter the code of libaray:";
       		cin>>n;
			if(n==code){
       				fflush(stdin);
       				cout<<"Enter your email id:";
       				cin>>localemail;
       				ifstream fin;
       				fin.open("admin.txt");
    			while(getline(fin,email)){
   					if(localemail==email)
   						count++;
					}
    					
       			fin.close();
    			if(count==0){
       				email=localemail;
       				ofstream fout;
            		fout.open("admin.txt",ios::app);
            		fout<<email;
            		fout<<"\n";
            		printf("Enter the password:");
            		cin>>password;
            		fout<<password;
            		fout<<"\n";
            		fout.close();
            	    cout<<"\n\t\tACCOUNT SUCESSFULLY CREATED";
            		cout<<"\n\nEnter any key to go back.......";
            	 	getch();
            		system("cls");
            		liberaien::locksystem();}
  				 else{
    				system("cls");
    				printf("\n\nEmail already exist!\n\n");
    				printf("press 1 for again signup or 2 for back:");
    				scanf("%d",&choice);
    			    if(choice==1){
    					system("cls");
    					liberaien::signup();}
    				else if (choice==2){				
    					system("cls");
   				 		liberaien::locksystem();}										
   					 else{
    					system("cls");
    					printf("Invalid.choice!");
    					input.mainmenu();}}
														
              }
 			else{
 						
             	system("cls");
             	printf("\nEnter the correct code of library!\n\n");
           		printf("press 1  for again signup or 2 for back:");
           		scanf("%d",&choice);
           			if(choice==1){							
           				system("cls");
           				liberaien::signup();}
           			else if (choice==2){
           				system("cls");
          				 liberaien::locksystem();}		
           			else{
       					system("cls");
       					printf("Invalid.choice!");
       					input.mainmenu();}}
       								
}
