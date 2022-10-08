/*
    Write a program to create  Student class having data member student name ,roll number and 
    percentage read data for 5 objects and display them.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	char name[500];
	int roll_no;
	float per;
	public:
		  void getinfo()
		  {
		  	cout<<"Enter the name, Roll Number and Percentage";
		  	cin>>name>>roll_no>>per;
		  }
		  void displayinfo()
		  {
		  	cout<<"\nName of Student is="<<name;
		  	cout<<"\nRoll of Student is="<<roll_no;
		  	cout<<"\nPercentage of Student is="<<per;
		  }
};
main()
{
	Student s1[5];
	//clrscr();
	for(i=0;i<5;i++)
	{
		s1[i].getinfo();
	}
	for(i=0;i<5;i++)
	{
		s1[i].displayinfo();
	}
	
	
}
