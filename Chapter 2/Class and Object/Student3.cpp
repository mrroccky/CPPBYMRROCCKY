/*
    Write a program to define class of Student having data members are
    name and roll number and data members are getinfo and displayinfo.
    getinfo have two arguments those are name1 and roll_no1. and those argument 
	accept by user and displayinfo print information taken from user.
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
	char name[500];
	int roll_no;
	public:
		  void getinfo(char name1[100], int roll_no1)
		  {
		  	  strcpy(name,name1);
		  	  roll_no=roll_no1;
		  }
		  void displayinfo()
		  {
		  	cout<<"\nName of Student is="<<name;
		  	cout<<"\nRoll of Student is="<<roll_no;
		  }
};
main()
{
	char n[500];
	int r;
	Student s1;
	cout<<"Enter the Name and Roll no";
	cin>>n>>r;
	s1.getinfo(n,r);
	s1.displayinfo();
	getch();
}
