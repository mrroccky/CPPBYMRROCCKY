/*
    Write a program to demonstrate to Multilevel inheritance.
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
	     cout<<"\nIntermmediate between the base class and derived class";
	   }
};
class C:public B
{
   public:
	  void displayC()
	  {
	     cout<<"\nThis is function of derived class";
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

