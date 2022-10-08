/*
    Write a program to demonstrate to Constructor and Destructor Multiple inheritance.
    Notes:- Please refer diagram for multiple inheritance which I told
	        while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  A()
	  {
	     cout<<"\nThis is Base class constructor";
	  }
	  ~A()
	  {
	     cout<<"\nThis is Base class Destructor";
	  }
};
class B
{
    public:
	   B()
	   {
	     cout<<"\nThis is another Base class Constructor";
	   }
	   ~B()
	   {
	     cout<<"\nThis is another Base class Destructor";
	   }
};
class C:public A,public B
{
   public:
	  C()
	  {
	     cout<<"\nThis is function of Derived class Constructor";
	  }
	  ~C()
	  {
	     cout<<"\n\nThis is function of Derived class Destructor";
	  }
};
main()
{
   C c1;
   //clrscr();
   getch();
}


