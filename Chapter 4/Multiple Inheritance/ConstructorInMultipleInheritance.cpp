/*
    Write a program to demonstrate to Constructor in Multiple inheritance.
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
};
class B
{
    public:
	   B()
	   {
	     cout<<"\nThis is another Base class Constructor";
	   }
};
class C:public A,public B
{
   public:
	  C()
	  {
	     cout<<"\nThis is function of Derived class Constructor";
	  }
};
main()
{
   C c1;
   //clrscr();
   getch();
}


