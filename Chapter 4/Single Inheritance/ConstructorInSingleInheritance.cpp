/*
   Write a program to demonstrate  constructor in single inheritance.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	 public:
	 	    Base()
	 	    {
	 	    	cout<<"This is Base class constructor";
			}
};
class Derived:public Base
{
	public:
		    Derived()
	 	    {
	 	    	cout<<"\nThis is Derived class constructor";
			}
		
};
main()
{
	//clrscr();
	Derived d1;
	getch();
}
