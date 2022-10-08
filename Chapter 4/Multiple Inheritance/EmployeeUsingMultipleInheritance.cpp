/*
    Write a program to implement following inheritance
    Notes:- Please refer diagram for multiple inheritance which I told
	        while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	int emp_id;
	char emp_name[400];
	public:
		    void getEmployeeDetails()
		    {
		    	cout<<"Enter the Employee Name and ID";
		    	cin>>emp_name>>emp_id;
			}
			void displayEmployeeDetails()
			{
				cout<<"Name of Employee is="<<emp_name;
				cout<<"\nEmployee Id of Employee is="<<emp_id;
			}
};
class Emp_Union
{
	int member_id;
	public:
		    void getMemberID()
		    {
		    	cout<<"\nEnter the Member ID";
		    	cin>>member_id;
			}
			void displayMemberID()
			{
				cout<<"\nMember id is="<<member_id;
			}
};
class Emp_info:public Emp_Union,public Employee
{
	 int Basic_salary;
	 public:
	 	  void getEmployeeInfo()
	 	  {
	 	  	   cout<<"Enter the Basic salary of employee";
	 	  	   cin>>Basic_salary;
		  }
		  void DisplayEmployeeInfo()
		  {
		  	  cout<<"\nBasic Salary of Employee is="<<Basic_salary;
		  }
};
main()
{
	Emp_info e1;
	//clrscr();
	e1.getEmployeeDetails();
	e1.getMemberID();
	e1.DisplayEmployeeInfo();
	e1.DisplayEmployeeInfo();
	e1.displayEmployeeDetails();
	e1.displayMemberID() ;
	getch();
}
