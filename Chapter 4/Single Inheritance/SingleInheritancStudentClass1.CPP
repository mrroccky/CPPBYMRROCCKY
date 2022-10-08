/*
    Write a program to implement following single inheritance.
    Note:- 
	      1. Diagram for this inheritance is in Image form with same as program name in .jpg or
             .png format.
          2. Please refer that diagram for implementation.

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	char name[500];
	int roll_no;
	 public:
	 	    void getStudentInfo()
	 	    {
	 	    	cout<<"\nEnter the name and roll number";
	 	    	cin>>name>>roll_no;
			}
			void displayStudentInfo()
			{
				cout<<"\nName="<<name;
				cout<<"\nRoll no="<<roll_no;
			}
};
class Engg_Student:public Student
{
	char branchName[500];
	public:
		   void getbranchName()
		   {
		   	   cout<<"\nEnter the branch name";
		   	   cin>>branchName;
		   }
		   void displaybranchName()
		   {
		   	   cout<<"\nBranch Name="<<branchName;
		   }
};
main()
{
	Engg_Student e1;
	//clrscr();
	e1.getStudentInfo();
	e1.getbranchName();
	e1.displayStudentInfo();
	e1.displaybranchName();
	getch();
	
}
