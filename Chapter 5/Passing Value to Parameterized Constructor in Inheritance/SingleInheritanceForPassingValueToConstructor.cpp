/*
     Write a program to pass argument to parameterized Constructor of Base class for Single Inheritance.
 */
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	 int a,b;
	 public:
			Base(int a1,int b1)
			{
				a=a1;
				b=b1;
				cout<<"\nValue of a is="<<a;
				cout<<"\nValue of b is="<<b;
			}
};
class Derived:public Base
{
	public:
		   	Derived(int a):Base(2,3)
			{
			
			    cout<<"\nWe passed value to Parameterized constructor of Base class";
			    cout<<"\nAnd Value of a in Derived class is="<<a;
			}
		    
		
};
main()
{
	//clrscr();
	Derived d1(20);
	getch();
}
