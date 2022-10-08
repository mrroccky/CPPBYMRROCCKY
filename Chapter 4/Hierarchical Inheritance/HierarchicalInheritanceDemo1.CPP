/*
    Write a program to demonstrate to Hierarachical inheritance.
    Notes:- Please refer diagram for hierarachical inheritance which I told
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
	     cout<<"\nThis is Derived class inherites Base class A";
	   }
};
class C:public A
{
   public:
	  void displayC()
	  {
	     cout<<"\nThis is another Derived class inherites Base class A";
	  }
};
main()
{
   B b1;
   C c1;
   //clrscr();
   b1.displayA();
   b1.displayB();
   c1.displayA();
   c1.displayC();
   getch();
}


