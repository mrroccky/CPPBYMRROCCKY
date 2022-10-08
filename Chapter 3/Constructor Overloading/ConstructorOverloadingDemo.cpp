/*
    Write a program to demonstrate constructor Overloading.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		    A()
		    {
		       cout<<"\nThis is Constructor Overloading Demo and ";
		       cout<<"This is Default Constructor";	
			}
			A(int a)
			{
				cout<<"\nThis is Constructor Overloading Demo and ";
		        cout<<"This is Parameterized Constructor with  one parameter";	
			}
			A(int a,int b)
			{
				cout<<"\nThis is Constructor Overloading Demo and ";
		        cout<<"This is Parameterized Constructor with two parameters";	
			}
			
};
main()
{
	//clrscr();
	A a1;
	A a2(1);
	A a3(1,2);
	getch();
}
