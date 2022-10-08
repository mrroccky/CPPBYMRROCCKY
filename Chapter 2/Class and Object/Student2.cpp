/*
    Write a program to define class of Student having data members are
    name and roll number and data members are getinfo and displayinfo.
    getinfo take information from user and displayinfo print information
    taken from user(Using outside the class definetion).
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
		   void getinfo();
		   void displayinfo();
		  
};
void Student::getinfo()
{
	 cout<<"Enter the name and Roll Number\n";
	 cin>>name>>roll_no;
}
void Student::displayinfo()
{
	cout<<"\nName of Student is="<<name;
	cout<<"\nRoll of Student is="<<roll_no;
}
main()
{
	Student s1;
	//clrscr();
	s1.getinfo();
	s1.displayinfo();
	getch();
}
