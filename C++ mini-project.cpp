
#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
char student_name[50];
char lecture_name[50];
char name[50];
char librarian_name[50];
char book_name[50];
char author_name[50];
int id_no;
int fax_no;
int password;
char e_mail[50];
void student();
void lecture();
void librarian();
void other();
void _sleep();
int main(){
	ofstream my_pass;
	my_pass.open("pass word");
	my_pass<<"you required to the password  "<<"561234789";
	my_pass.close();
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 8);
	
	
for(int i=1; i<=3; i++){
	cout<<"WELLCOME TO WKU LMS"<<endl;
		_sleep();
	cout<<"H";
		_sleep();
	cout<<"I";
	_sleep();
	cout<<"!";
	_sleep();
	cout<<" ";
		SetConsoleTextAttribute(h,4);
	_sleep();
	cout<<"W";
	_sleep();
	cout<<"K";
	SetConsoleTextAttribute(h,6);
	_sleep();
	cout<<"U";
		
	_sleep();
	cout<<" ";
	_sleep();
	SetConsoleTextAttribute(h, 2);
	cout<<"L";
		SetConsoleTextAttribute(h,2);
	_sleep();
	cout<<"M";
	_sleep();
	cout<<"S";
	_sleep();
	system("cls");
}	
	system("pause");
	system("cls");
		SetConsoleTextAttribute(h,7);
			int g=561234789;
   int j;
		cout<<" Dear user please enter the password"<<endl;
		cin>>j;
		system("cls");
		if(j==g){
		goto menu;
	
		}
		else{
		cout<<" You enter wrong password\nplease try later"<<endl;
       goto thank;
		}

	int a;
	menu:
	{
		SetConsoleTextAttribute(h, 14);
	cout<<"\n  wellcome\n  choose your option\n  1: login\n  2: exit"<<endl;
	cin>>a;
	system("cls");
	if(a==1){
		
		int b;
		SetConsoleTextAttribute(h, 3);
	
		cout<<"\nwellcome again\nchoose your option\n  1: student\n  2: lecture\n  3: librarian\n  4: other\n  5: exit"<<endl;
		cin>>b;
		system("cls");
		system("pause");
		system("cls");
		if(b==1){
			 student();
		}
		else if(b==2){
			 lecture();
		}
		else if(b==3){
			librarian();
		}
		else if(b==4){
			 other();
			 system("pause");
			 system("cls");
		}
		else{
			SetConsoleTextAttribute(h, 15);
			cout<<"\n  thank you"<<endl;
		}}
		
		else{
		cout<<"\  thank you"<<endl;
	}
		
		}
		thank:
			{
				cout<<"Thank you"<<endl;			}
	
		return 0;
	}
	void _sleep(){
		_sleep(100);
	}
	void student(){
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 9);
		int c;
		for(int i=1; i<=5; i++){
		cout<<"please weit";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		system("cls");
		}
	cout<<"\n  wellcome again\n  choose your option\n  1: freshl\n  2: senior\n  3: exit"<<endl;
	cin>>c;	
	system("cls");
	system("pause");
	system("cls");
		if(c==1){
			int d;
			SetConsoleTextAttribute(h, 11);
			cout<<"\n  Wellcome our students to the system\n  choose your option\n  1: natural\n  2: social\n  3: exit"<<endl;
			cin>>d;
			system("cls");
			if(d==1){
				SetConsoleTextAttribute(h, 7);
				cout<<"\n  Wellcome again our student Please enter your name"<<endl;
				cin.ignore();
				cin.getline(student_name, 50);
				system("cls");
				SetConsoleTextAttribute(h, 8);
				cout<<"\n  Student "<<student_name<<" please enter your id number "<<endl;
				cin>>id_no;
				system("cls");
				system("pause");
				system("cls");
				cout<<"\n  enter the name of the book you need"<<endl;
				cin.ignore();
				cin.getline(book_name, 50);
				system("cls");
				SetConsoleTextAttribute(h, 3);
				cout<<"\n  enter the name of the author you need "<<endl;
				cin.ignore();
				cin.getline(author_name,50);
				system("cls");
				cout<<"\  READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n  The operation of our system copletely completed\nTHANK YOU!!!"<<endl;
			}
			else if(d==2){
				SetConsoleTextAttribute(h, 19);
			cout<<"\n  Wellcome again our student Please enter your name"<<endl;
			cin.ignore();
				cin.getline(student_name,50);
				system("cls");
				system("pause");
				system("cls");
				SetConsoleTextAttribute(h, 24);
				cout<<"\n   Student "<<student_name<<"  please enter your id number "<<endl;
				cin>>id_no;
				system("cls");
				cout<<"\n  enter the name of the book you need"<<endl;
				cin.ignore();
				cin.getline(book_name,50);
				system("cls");
				cout<<"\n  enter the name of the author you need "<<endl;
				cin.ignore();
				cin.getline(author_name,50);
				system("cls");
				cout<<"\n   READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\nThe operation of our system copletely completed\nTHANK YOU!!!"<<endl;	
			}
			else{
				cout<<"\n   THANK YOU!!!"<<endl;
			}
		}
		else if(c==2){
		system("pause");
		system("cls");
	int e;
			cout<<"\n  Wellcome our students to the system\n  choose your option\n  1: natural\n  2: social\n  3: exit"<<endl;
			cin>>e;
			if(e==1){
				cout<<"\n  Wellcome again our student Please enter your name"<<endl;
				cin.ignore();
				cin.getline(student_name,50);
				system("cls");
				cout<<"\n   Student "<<student_name<<"  please enter your id number "<<endl;
				cin>>id_no;
				system("cls");
				cout<<"\n  enter the name of the book you need"<<endl;
				cin.ignore();
				cin.getline(book_name,50);
				system("cls");
				system("pause");
				system("cls");
				cout<<"\n  enter the name of the author you need "<<endl;
				cin.ignore();
				cin.getline(author_name, 50);
				system("cls");
				cout<<"\n    READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n  The operation of our system copletely completed\nTHANK YOU!!!"<<endl;
			}
			else if(e==2){
			cout<<"\n  Wellcome again our student Please enter your name"<<endl;
			cin.ignore();
				cin.getline(student_name,50);
				system("cls");
				cout<<"\n   Student "<<student_name<<"please enter your id number "<<endl;
				cin>>id_no;
				system("cls");
				cout<<"\n  enter the name of the book you need"<<endl;
				cin.ignore();
				cin.getline(book_name,50);
				system("cls");
				system("pause");
				system("cls");
				cout<<"\n  enter the name of the author you need "<<endl;
				cin.ignore();
				cin.getline(author_name,50);
				system("cls");
				cout<<"\n   READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n The operation of our system copletely completed\nTHANK YOU!!!"<<endl;	
			}
			else{
				cout<<"\n   THANK YOU!!!"<<endl;
			}	
		
	}
else{
	cout<<"\n  THANK YOU"<<endl;
}		
		
		
		
		
	}
	void lecture(){
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 9);
	for(int i=1; i<=5; i++){
		cout<<"please weit";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		system("cls");
		}
		system("pause");
		SetConsoleTextAttribute(h, 9);
	cout<<"\n   WELLCOME OUR LECTURES TO OUR SYSTEM\nplease enter your name"<<endl;

	cin.ignore();
				cin.getline(lecture_name,50);
	system("cls");
	cout<<"\n    MR "<<lecture_name<<" Please enter your fax number"<<endl;	
		cin>>fax_no;
		system("cls");
		cout<<"\n  enter the name of the book you need"<<endl;
			
					cin.ignore();
				cin.getline(book_name,50);
					system("cls");
				system("pause");
				system("cls");
				cout<<"\n  enter the name of the author you need "<<endl;
				
				cin.ignore();
				cin.getline(author_name,50);
				system("cls");
				cout<<" \n  READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n   The operation of our system copletely completed\nTHANK YOU!!!"<<endl;
			}
			void librarian(){
				HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 9);
	for(int i=1; i<=5; i++){
		cout<<"please weit";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		system("cls");
		}
				cout<<" \n  WELLCOME OUR LIBRARIAN TO OUR SYSTEM\n  please enter your name"<<endl;
	        cin.ignore();
				cin.getline(librarian_name,50);
	            system("cls");
	            SetConsoleTextAttribute(h, 12);
	            cout<<"\n    MR "<<librarian_name<<" Please enter your fax number"<<endl;	
		         cin>>fax_no;
		         system("cls");
		        cout<<"\n  enter the name of the book you need"<<endl;
			cin.ignore();
				cin.getline(book_name,50);
				system("cls");
				SetConsoleTextAttribute(h, 10);
				cout<<"\n  enter the name of the author you need "<<endl;
				cin.ignore();
				cin.getline(author_name,50);
				system("cls");
				cout<<" \n  READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n The operation of our system copletely completed\nTHANK YOU!!!"<<endl;
				
			}
		void other(){
			HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 9);
			for(int i=1; i<=5; i++){
		cout<<"please weit";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		_sleep();
		cout<<".";
		system("cls");
		}
		cout<<"\n   WELLCOME GUYS TO OUR SYSTEM\nplease enter your name"<<endl;
		system("pause");
	           cin.ignore();
				cin.getline(name,50);
	            system("cls");
	            cout<<"\n    MR "<<name<<"enter your e-mail"<<endl;	
		        cin.ignore();
				cin.getline(e_mail,50);
		         system("cls");
		         cout<<"\n  enter your password"<<endl;
		         cin>>password;
		         system("cls");
		        cout<<"\n  enter the name of the book you need"<<endl;
		        
			cin.ignore();
				cin.getline(book_name,50);
				system("cls");
				cout<<"\n  enter the name of the author you need "<<endl;
			cin.ignore();
				cin.getline(author_name,50);
				system("cls");
		cout<<"\n    READ THE BOOK "<<book_name<<" AND HAVE TO FAST\n\n\n  The operation of our system copletely completed\nTHANK YOU!!!"<<endl;	
			
			
		}
