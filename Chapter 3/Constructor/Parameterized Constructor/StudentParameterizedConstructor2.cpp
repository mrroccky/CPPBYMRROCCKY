/*
    Write a program to define Student having suitable data members and takes value 
    for data members using parameterized constructor and display it using print member function.
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
	 char name[200];
	 int roll_no;
	 float per;
	 public:
	 	    Student(char n[],int r, float p)
	 	    {
	 	        strcpy(name,n);
	 	        roll_no=r;
	 	        per=p;
			}
			void print()
			{
			   cout<<"Name is="<<name;
		   	   cout<<"\nRoll no is="<<roll_no;
		   	   cout<<"\nPercentage is="<<per;	
			}
};
main()
{
	int r;
	float p;
	char n[500];
	//clrscr();
	cout<<"Enter the Name, Roll Number and Percentage";
	cin>>n>>r>>p;
	Student s1(n,r,p);
	s1.print();
	getch();
}
