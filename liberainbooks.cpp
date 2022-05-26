#include "liberainbooks.h"

void liberainbooks::addbook(){
		   	cout<<"\n\t\t\tADD BOOKS\n";
		int i=1,intpublication_year;
		stringstream ss;             // convert string to integer  
		string n;
		int count=0,integer;
		string localid,id;
        printf("Enter the number of books you want to add in library..");
        cin>>n;
        ss<<n;
        ss>>integer;
        if(integer!=0)
        {
    	  for(i=1;i<=integer;i++){
			count=0;
       		cout<<endl<<"Enter the book id"<<i<<":";
       		cin>>localid;
       		ifstream fin;
       		fin.open("addingbooks.txt");
      		 while(getline(fin,id)){    
        		if(localid==id)
        			count++;}
			fin.close();
			if(count==0){
				id=localid;
        		ofstream fout;
        		fout.open("addingbooks.txt",ios::app);
        		cout<<"Enter the title of Book:";
        		cin>>title;
        		fflush(stdin);
        	    cout<<"Enter the name of Auhor:";
        		cin>>author;
        		cout<<"Enter publication year:";
        		cin>>intpublication_year;
        		ss<<publication_year;
        		ss>>intpublication_year;
        		if(intpublication_year!=0)
        		{
        		fout<<id<<endl<<title<<endl<<author<<endl<<intpublication_year<<endl;
        		fout.close();
        		cout<<"\n--------------------------------------------------------\n";
        		cout<<"--------------------------------------------------------\n";}
        		else
        		cout<<"\t\tInvalid!.Publication year\n";
        }
       		else
           		cout<<"Book already exist in library!\n";}}
           		else
           		cout<<"Invalid!\n";
}

void liberainbooks::feedback(){
	ifstream fin("feedback.txt");
    cout<<"\n\t\tFEEDBACK\n\n";
    fflush(stdin);
    char ch;
  	while(!fin.eof()){
      fin.get(ch);
      cout<<ch;}
  	fin.close();
}

void liberainbooks::issuebbook(){
	string email;
	cout<<"\n\t\t\t\tISSUE BOOKS RECORD\n";
    ifstream fin("issuedbook.txt");
    getline(fin,email);
    getline(fin,id);
    getline(fin,title);
    getline(fin,author);
    getline(fin,publication_year);
	while(!fin.eof()){
	cout<<"Student Email:"<<email;
	cout<<endl<<"\t\tBook Borrowed";
	cout<<endl<<"Book Id:"<<id;
	cout<<endl<<"Book Title"<<title;
	cout<<endl<<"Author Name:"<<author;
	cout<<endl<<"Publication year"":"<<publication_year;
	cout<<"\n------------------------------------------";
	cout<<"\n------------------------------------------\n";
	getline(fin,email);
	getline(fin,id);
	getline(fin,title);
    getline(fin,author);
    getline(fin,publication_year);
   }
    fin.close();
}

void liberainbooks::Removebook(){
		    Display *input=new Display;     // dynamically create object
	     string localid;int count;
		cout<<"\n\t\tREMOVE BOOKS\n";
   		liberainbooks::viewbook();
   		ifstream fin("addingbooks.txt");
   		ofstream fout("temp.txt")  ;
       	cout<<"\nEnter Bookid you want to Remove...";
        cin>>localid;
        getline(fin,id);
        getline(fin,title);
        getline(fin,author);
        getline(fin,publication_year);
        while(!fin.eof()){
         	if(id==localid)
         	count=1;
       		else
       			fout<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
       		    getline(fin,id);
                getline(fin,title);
               getline(fin,author);
              getline(fin,publication_year);	
       		}
       		
        fin.close();
        fout.close();
        if(count==1){
        	ofstream fout("addingbooks.txt");
        	ifstream fin("temp.txt");
            getline(fin,id);
        	getline(fin,title);
        	getline(fin,author);
        	getline(fin,publication_year);
            while(!fin.eof()){
            	fout<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;	
            	getline(fin,id);
        		getline(fin,title);
        		getline(fin,author);
        		getline(fin,publication_year);
   				}
       		printf("\n\t\tBOOK REMOVED SUCESSFULLY\n");
       		fin.close();
       		fout.close();}
        else{
            cout<<"\n\t\tRECORD NOT FOUND!!";
            cout<<"\npress any key to go back....";
            getch();
            system("cls");
            input->featuresL();}
            delete input;
        
}

void liberainbooks::searchbook(){
	         Display *input=new Display;     // dynamically create object
	        string localid;
			cout<<"\n\t\tSEARCH BOOKS\n";
    		int count=0;
      		liberainbooks::viewbook();
     		cout<<"\nEnter Bookid:";
       		cin>>localid;
     		ifstream fin;
			fin.open("addingbooks.txt");  
      		while(getline(fin,id)) {
     			if(localid==id){
   					count=1;
  					cout<<"\n\t\tYOUR BOOK IS FOUND\n ";
  					getline(fin,title);
  					getline(fin,author);
  					getline(fin,publication_year);
   					cout<<"Book id:"<<id<<endl<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Publication year:"<<publication_year<<endl;
   					break;}}
    		if(count==0){
       			cout<<"\n\t\tBOOK NOT FOUND!!";
       			fin.close();
       			cout<<"\nEnter any key go back ...";
       			getch();
       			input->featuresL();}
        	   fin.close();
        	   delete input;
}

void liberainbooks::updatebook(){
	int check=0;
	            Display input;
				cout<<"\n\t\tUPDATE BOOKS\n\n";
    			int count=0;
    			string localid,newid;
           		liberainbooks::viewbook();
                ifstream fin("addingbooks.txt");
                ofstream fout("temp.txt");  
           		cout<<"\nEnter Bookid You Want to Update:";
             	cin>>localid;
             
         		while(getline(fin,id)){
        				if(id==localid){
        				getline(fin,title);
						getline(fin,author);
						getline(fin,publication_year);
        					count=1;
        					cout<<"\n\t\tYour Book Found\n";
        					cout<<"Book id:"<<id<<endl<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Publication year:"<<publication_year<<endl;
						}
			           else
			        {
					

						getline(fin,title);
						getline(fin,author);
						getline(fin,publication_year);
						fout<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;}
						}
						fout.close();
						fin.close();
						if(count==1)
						{
							ifstream fin("addingbooks.txt");
								cout<<"\nEnter New Bookid:";
								cin>>newid;
								while(getline(fin,id))
								{
									if(id==newid)
									{
										cout<<"\nBook id already exist!\n\n";
										cout<<"\npress any key for go back...";
            							getch();
            							check=1;
            							system("cls");
            							input.featuresL();
            							fin.close();
            							break;
									}
								}
								fin.close();
								ofstream fout("temp.txt",ios::app);
								if(check==0)
                   				{
                   					id=newid;
									cout<<"\nEnter New Title of Book:";
           							cin>>title;
           							cout<<"\nEnter New Name of Auhor:";
           							cin>>author;
           							cout<<"\nEnter publication year: of Auhor:";
           							cin>>publication_year;
           							fout<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
								}
								fout.close();
								ofstream fout1("addingbooks.txt");
                				ifstream fin1("temp.txt");  
								while(getline(fin1,id))
								{
									getline(fin1,title);
									getline(fin1,author);
									getline(fin1,publication_year);
									fout1<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
								}
								fout1.close();
								fin1.close();
						}
						else
						{
							cout<<"\n\t\tRECORD NOT FOUND!!";
                			cout<<"\npress any key to go back....";
                			getch();
                			system("cls");
                			input.featuresL();
						}
}

void liberainbooks::viewbook(){
	cout<<"\n\t\t\tVIEW BOOKS\n";
    	   ifstream fin;
            fin.open("addingbooks.txt");
            getline(fin,id);
        	getline(fin,title);
        	getline(fin,author);
        	getline(fin,publication_year);
        while(!fin.eof()){
       		cout<<"Book id:"<<id<<endl<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Publication year:"<<publication_year<<endl;
      	    cout<<"\n--------------------------\n";
      	    getline(fin,id);
        	getline(fin,title);
        	getline(fin,author);
        	getline(fin,publication_year);
			  }
            fin.close();
}

