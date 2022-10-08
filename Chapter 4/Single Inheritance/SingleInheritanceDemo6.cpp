/*
     Write a program to demonstrate single inheritance and inherit private data member and
	 member function.
*/ 
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	 int a;
	 void basefn1()
	 {
		a=10;
		cout<<"\nThis is Private method of class and privately inherit in derived class";
		cout<<"\nValue of a of private member is="<<a;
	 }
	 public:
	        void basefn2()
	        {
	             
		         cout<<"\nThis is Public method of Base class and privately inherit in derived class and call private method of base class";
		         basefn1();	
	        } 
};
class Derived:private Base
{
	public:
		   void derivedfn()
		   {
		   	  cout<<"Now we call private member and member function of Base class";
		   	  basefn2();
		   }
};
main()
{
     Derived d1;
	 //clrscr();
	 d1.derivedfn();
	 getch();	
}
