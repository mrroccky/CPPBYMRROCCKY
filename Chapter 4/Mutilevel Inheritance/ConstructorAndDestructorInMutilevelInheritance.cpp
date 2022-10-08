/*
    Write a program to demonstrate to Constructor and Destructor in Multilevel inheritance.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  A()
	  {
	     cout<<"\nThis is Constructor of Base class";
	  }
	  ~A()
	  {
	     cout<<"\nThis is Destructor of Base class";
	  }
};
class B:public A
{
    public:
	   B()
	   {
	     cout<<"\nThis is Constructor of intermmediate between the Base class and Derived class";
	   }
	   ~B()
	   {
	     cout<<"\nThis is Destructor of intermmediate between the Base class and Derived class";
	   }
};
class C:public B
{
   public:
	  C()
	  {
	     cout<<"\nThis is Derived class Constructor.";
	  }
	  ~C()
	  {
	     cout<<"\n\nnThis is Derived class destructor.";
	  }
};
main()
{
	//clrscr();
    C c1;
    getch();
}

