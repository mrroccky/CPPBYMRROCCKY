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
class Customer
{
	char name[400];
	long int ph_no;
	public:
		   void getCustomerInfo()
		   {
		   	  cout<<"\nEnter the Name and Phone of Customer";
		   	  cin>>name>>ph_no;
		   }
		   void displayCustomerInfo()
		   {
		   	  cout<<"\nName of Customer is="<<name;
		   	  cout<<"\nPhone number of customer is="<<ph_no;
		   }
};
class Depositor : public Customer
{
	int acc_no;
	float balance;
	public:
		   void getDepositorDetails()
		   {
		   	   cout<<"\nEnter the Account number and Balance of Customer";
		   	   cin>>acc_no>>balance;
		   }
		   void displayDepositorDetails()
		   {
		   	   cout<<"\nAccount number of Customer is="<<acc_no;
		   	   cout<<"\nBalance of customer is="<<balance;
		   	  
		   }
};
class Borrower: public Depositor
{
	 long int loan_no;
	 double loan_amount;
	 public:
	 	    void getBorrowerInformation()
	 	    {
		   	   cout<<"\nEnter the Loan number and Loan amount of Customer";
		   	   cin>>loan_no>>loan_amount;
		   }
		   void displayBorrowerDetails()
		   {
		   	   cout<<"\nLoan number of Customer is="<<loan_no;
		   	   cout<<"\nLoan amount of customer is="<<loan_amount;
		   	  
		   }
};
main()
{
    Borrower b1;
	//clrscr();
	b1.getCustomerInfo();
	b1.getDepositorDetails();
	b1.getBorrowerInformation();
	b1.displayCustomerInfo();
	b1.displayDepositorDetails();
	b1.displayBorrowerDetails();
	getch();
}
