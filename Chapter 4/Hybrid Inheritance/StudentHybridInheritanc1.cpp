/*
     Write a program to implement inheritance.
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
class Test:public Student
{
	protected:
	         int mark1,mark2,mark3;
	public:
		   void getMarks()
		   {
		   	    cout<<"\nEnter the marks of three subjects\n";
		   	    cin>>mark1>>mark2>>mark3;
		   }
		   void displayMarks()
		   {
		   	   cout<<"\nMarks for Subject 1="<<mark1;
		   	   cout<<"\nMarks for Subject 2="<<mark2;
		   	   cout<<"\nMarks for Subject 3="<<mark3;
		   }
};
class Sports
{
	 protected:
	 	       int sportsScore;
	 public:
	 	    void getSportsScore()
	 	    {
	 	    	cout<<"\nEnter Sports score\n";
	 	    	cin>>sportsScore;
			 }
			 void displaySportScore()
			 {
			 	  cout<<"\nSports Score is="<<sportsScore;
			 }
};
class Result:public Test , public Sports
{
	int total;
	float per;
	public:
		   void calculateMarks()
		   {
		   	   total=mark1+mark2+mark3+sportsScore;
		   	   per=(float)total/400*100;
		   }
		   void displayTotalAndPercentage()
		   {
		   	   cout<<"\nTotal marks is="<<total;
		   	   cout<<"\nPercentage is="<<per;
		   }
};
main()
{
	Result r1;
	//clrscr();
	r1.getStudentInfo();
	r1.getMarks();
	r1.getSportsScore();
	r1.displayStudentInfo();
	r1.displayMarks();
	r1.displaySportScore();
	r1.calculateMarks();
	r1.displayTotalAndPercentage();
	getch();
}
