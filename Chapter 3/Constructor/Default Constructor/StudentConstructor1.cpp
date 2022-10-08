/*
    Write a program to define class of Student having data member name
    roll number and percentage iniaize using default constructor
	and display information using suitable function.(Using inside class defination).
*/
#include<iostream>
#include<conio.h>
#include<string.h>//OR #include<cstring> on DevC++ and CodeBlcok IDE
using namespace std;
class Student
{
	 char name[500];
	 int roll_no;
	 float per;
	 public:
	 	      Student()
	 	      {
	 	      	 strcpy(name,"Chetan");
	 	      	 roll_no=1;
	 	      	 per=70.9;
			  }
			  void display()
			  {
			  	  cout<<"\nName is="<<name;
			  	  cout<<"\nRoll no. is="<<roll_no;
			  	   cout<<"\nPercentage is="<<per;
			  }
};
main()
{
	Student s1;
	//clrscr();
	s1.display();
	getch();
}
