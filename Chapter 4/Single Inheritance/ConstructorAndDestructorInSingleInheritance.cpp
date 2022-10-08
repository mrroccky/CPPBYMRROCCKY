/*
   Write a program to demonstrate  Constructor  and Destructor in single inheritance.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	 public:
	 	    Base()
	 	    {
	 	    	cout<<"This is Base class Constructor";
			}
			~Base()
	 	    {
	 	    	cout<<"\nThis is Base class Destructor";
			}
};
class Derived:public Base
{
	public:
		    Derived()
	 	    {
	 	    	cout<<"\nThis is Derived class Constructor";
			}
		    ~Derived()
	 	    {
	 	    	cout<<"\n\n\nThis is Derived class Destructor";
			}
};
main()
{
	//clrscr();
	Derived d1;
	getch();
}
