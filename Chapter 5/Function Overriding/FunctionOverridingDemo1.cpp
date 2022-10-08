/*
    Write a program to demonstrate Function Overriding in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a;
	public:
		   void get()
		   {
		   	  a=10;
		   	  cout<<"\nThis is function of Base class";
		   	  cout<<"\nAnd value of a is="<<a;
		   }
};
class B:public A
{
	int b;
	public:
		   void get()
		   {
		   	  b=20;
		   	  cout<<"\nThis is function of Derived class";
		   	  cout<<"\nAnd value of b is="<<b;
		   }
		
};
main()
{
	B b1;
	//clrscr();
	b1.get();
	getch();
}
