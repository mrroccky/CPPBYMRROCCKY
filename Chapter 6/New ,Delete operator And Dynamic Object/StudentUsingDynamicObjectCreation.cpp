/*
    Write a program to define class of Student having data members are
    name and roll number and data members are getinfo and displayinfo.
    getinfo take information from user and displayinfo print information
    taken from user using dynamic Object creation.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	char name[500];
	int roll_no;
	public:
		  void getinfo()
		  {
		  	cout<<"Enter the name and Roll Number";
		  	cin>>name>>roll_no;
		  }
		  void displayinfo()
		  {
		  	cout<<"\nName of Student is="<<name;
		  	cout<<"\nRoll of Student is="<<roll_no;
		  }
};
main()
{
	Student *s1;
	//clrscr();
	s1=new Student;
	s1->getinfo();
	s1->displayinfo();
	delete s1;
	getch();
}
