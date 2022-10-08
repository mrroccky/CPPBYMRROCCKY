/*
    Write a program to define class of Student take suitable data members and members
	function and use Copy constructor.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	char name[200];
	int roll_no;
	float per;
	public:
		   Student()
		   {
		   	   cout<<"Enter the Name ,Roll no and Percentage";
		   	   cin>>name>>roll_no>>per;
		   }
		   Student(Student &s2)
		   {
		   	  cout<<"Name is="<<s2.name;
		   	  cout<<"\nRoll no is="<<s2.roll_no;
		   	  cout<<"\nPercentage is="<<s2.per;
		   }
		   
};
main()
{
	  Student s1;
	  Student s2(s1,"chetan");
	  getch();
}
