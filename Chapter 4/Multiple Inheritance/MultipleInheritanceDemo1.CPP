/*
    Write a program to demonstrate to Multiple inheritance.
    Notes:- Please refer diagram for multiple inheritance which I told
	    while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  void displayA()
	  {
	     cout<<"\nThis is function of Base class";
	  }
};
class B
{
    public:
	   void displayB()
	   {
	     cout<<"\nThis is function of another Base class";
	   }
};
class C:public A,public B
{
   public:
	  void displayC()
	  {
	     cout<<"\nThis is function of Derived class";
	  }
};
main()
{
   C c1;
   //clrscr();
   c1.displayA();
   c1.displayB();
   c1.displayC();
   getch();
}


