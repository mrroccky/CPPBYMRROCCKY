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
		    	cout<<"\nEnter the Employee Name and ID";
		    	cin>>emp_name>>emp_id;
			}
			void displayEmployeeDetails()
			{
				cout<<"\nName of Employee is="<<emp_name;
				cout<<"\nEmployee Id of Employee is="<<emp_id;
			}
};
class Worker:public Employee
{
	double overtime_salary;
	public:
		   void getWorkerInfo()
		   {
		   	   cout<<"\nEnter the Overtime Salary";
		   	   cin>>overtime_salary;
		   }
		   void displayWorkerInfo()
		   {
		   	   cout<<"\nEntered Overtime Salary is="<<overtime_salary;
		   }
};
class Manager: public Employee
{
	double additional_allowance;
	public:
		   void getManagerInfo()
		   {
		   	   cout<<"\nEnter the Additional allowance for Manager";
		   	   cin>>additional_allowance;
		   }
		   void displayManagerInfo()
		   {
		   	   cout<<"\nEntered Additional allowance is="<<additional_allowance;
		   }
};
main()
{
	Worker w1;
	Manager m1;
	//clrscr();
	w1.getEmployeeDetails();
	w1.getWorkerInfo();
	m1.getEmployeeDetails();
	m1.getManagerInfo();
	w1.displayEmployeeDetails();
	m1.displayEmployeeDetails();
	m1.displayManagerInfo();
	getch();
}
