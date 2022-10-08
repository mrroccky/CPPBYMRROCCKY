/*
    Write a program to demonstrate to Hybrid inheritance.
    Notes:- Please refer diagram for hybrid inheritance which I told
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
class B:public A
{
    public:
	   void displayB()
	   {
	     cout<<"\nIntermmediate between the Base class and Derived class";
	   }
};
class C
{
   public:
	   void displayC()
	   {
	      cout<<"\nThis is another Base class function";
	   }
};
class D:public B,public C
{
   public:
	  void displayD()
	  {
	     cout<<"\nThis is function of Derived class";
	  }
};
main()
{
   D d1;
   //clrscr();
   d1.displayA();
   d1.displayB();
   d1.displayC();
   d1.displayD();
   getch();
}

