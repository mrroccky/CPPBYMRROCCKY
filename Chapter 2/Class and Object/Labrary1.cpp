/*
     Write a program to define class Labrary having data member are book name, book id, book price.
     having getBookInfo data members which accepts book information and displayBookInfo which displays 
	 information which is accepted by user. 
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Labrary
{
	char book_name[500];
	int book_id;
	float book_price;
	public:
		   void getBookInfo();
		   void displayBookInfo();
		  
};
void Labrary::getBookInfo()
{
	 cout<<"Enter the Book ID,Book Name and Book Price\n";
	 cin>>book_id>>book_name>>book_price;
}
void Labrary::displayBookInfo()
{
	cout<<"\nBook ID="<<book_id;
	cout<<"\nBook Name="<<book_name;
	cout<<"\nBook Price="<<book_price;
}
main()
{
	Labrary l1;
	//clrscr();
	l1.getBookInfo();
	l1.displayBookInfo();
	getch();
}
