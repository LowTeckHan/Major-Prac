#include "studentbook.h"

void studentbook::feedback(){
	
	    string feedback;
		cout<<"\n\t\t\tFEEDBACK\n";
		cout<<"\nEnter your Feedback:";
		fflush(stdin);
		cin>>feedback;
     	ofstream fout("feedback.txt",ios::app);
       for(int i=0;i<feedback.length();i++)  {
       		fout.put(feedback[i]);}
       		fout.put('\n');
       	fout.close();
       	cout<<"\n";	
}

void studentbook::issuebbook(){
		  liberainbooks *input2=new liberainbooks;      // dynamically create object
	  Display *input= new Display;
	  string localid;
		cout<<"\n\t\t\tISSUE BOOKS\n";
     	int count=0,o=0,intday;
		 string day;
		 stringstream ss;
		
      	string email,oemail;
    	system("cls");
		input2->viewbook();
		cout<<"\nEnter Bookid...";
  		cin>>localid;
		ifstream fin("addingbooks.txt");  
   		while(getline(fin,id)){
  			if(localid==id){
 				cout<<"\n\t\tYOUR BOOK IS FOUND\n";
 				getline(fin,title);
        		getline(fin,author);
        		getline(fin,publication_year);
  				cout<<"Book id:"<<id<<endl<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Publication year:"<<publication_year<<endl;
      	    	cout<<"\n--------------------------\n";
  				count=1;
  			break;}}
  		fin.close();
  		if(count==1){
   			fflush(stdin);
  			cout<<"Enter your Email:";
  			cin>>email;
  			ifstream fin("students.txt");  
			while(getline(fin,oemail)){
				if(oemail==email){
					o=1;}}
			fin.close();
			if(o==1){
 		     cout<<"Enter number days you want to issue book:";
 			 cin>>day;
 		    ss<<day;
		    ss>>intday;
			if(intday!=0)
			{	 
 				if(intday<=15){
 					cout<<"\n\tYou Successfully Issued Book\n";
 					oemail=email;
 					ofstream fout("issuedbook.txt",ios::app);
 					fout<<oemail<<endl<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
 					fout.close();}
 				else{
 				    cout<<"Number of days not greater than 15!";
 					cout<<"\npress any key for go back...";
 					getch();
 					input->featuresS();}}
 					else
 					cout<<"Invalid!\n";
					 }	
			else{
			    cout<<"\nYour Email not found in libaray";
				cout<<"\npress any key for go back...";
				getch();
				input->featuresS();}}
  		else{
   			cout<<"\n\t\tBOOK NOT FOUND!!\n";
   			fin.close();
   			cout<<"\nEnter any key go back...";
   			getch();
  			input->featuresS();}
  			delete input;
  			delete input2;
}

void studentbook::returnbook(){
		Display *input=new Display;       // dynamically create object
	string email,localemail,localid;;
	cout<<"\n\t\t\t\tRETURN BOOKS\n";
	int count=0;
	cout<<"Enter the Email:";
	cin>>localemail;
	fflush(stdin);
	cout<<"Enter the book id:";
	cin>>localid;
	ifstream fin("issuedbook.txt");
	ofstream fout("returnbooks.txt");
	    getline(fin,email);
		getline(fin,id);
        getline(fin,title);
        getline(fin,author);
        getline(fin,publication_year);
        while(!fin.eof()){
         	if(id==localid&&email==localemail)
         		count=1;
       		else
       			fout<<email<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
       		    getline(fin,id);
                getline(fin,title);
                getline(fin,author);
                getline(fin,publication_year);}	
       			
	fout.close();
	fin.close();
	if(count==0)
	{
		cout<<"\nEnter correct bookid or email!";
		cout<<"\npress any key for go back......";
		getch();
		input->featuresS();
	}
	else
	{
	       ofstream fout("issuedbook.txt");
        	ifstream fin("returnbooks.txt");
        	getline(fin,email);
            getline(fin,id);
        	getline(fin,title);
        	getline(fin,author);
        	getline(fin,publication_year);
            while(!fin.eof()){
            	fout<<email<<endl<<id<<endl<<title<<endl<<author<<endl<<publication_year<<endl;
				getline(fin,email);	
            	getline(fin,id);
        		getline(fin,title);
        		getline(fin,author);
        		getline(fin,publication_year);
   				}
   			fout.close();
   			fin.close();
	 cout<<"\n\t\t\tBOOK RETURN SUCCESSFULLY\n";
	 cout<<"press any key for go back.... ";
	 getch();
	 input->featuresS();
 }
 delete input;        
}

void studentbook::searchbook(){
		cout<<"\n\t\t\tSEARCH BOOKS\n";
    	int count=0,b;
    	string localid;
    	Display input1;
   		liberainbooks  input;
		input.viewbook();
        cout<<"\nEnter Bookid:";
        cin>>localid;
     	ifstream fin("addingbooks.txt");
      	while(getline(fin,id)){
     		if(id==localid){
   				count=1;
   				getline(fin,title);
  				getline(fin,author);
  				getline(fin,publication_year);
   			cout<<"Book id:"<<id<<endl<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Publication year:"<<publication_year<<endl;
      	    cout<<"\n--------------------------\n";
   				break;}}
		if(count==0){
       cout<<"\n\t\t\tBOOK NOT FOUND!!";
       fin.close();
       cout<<"\nPress any key go back ...";
       getch();
       input1.featuresS();}
       fin.close();
}

void studentbook::viewbook(){
	
}
