/*
    Write a program to demonstrate Constructor in Hierarachical inheritance.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  A()
	  {
	     cout<<"\nThis is Base class Constructor";
	  }
};
class B:public A
{
    public:
	   B()
	   {
	     cout<<"\nThis is Derived class Constructor(i.e) B class Constructor";
	   }
};
class C:public A
{
   public:
	  C()
	  {
	     cout<<"\nThis is another Derived class Constructor(i.e) C class Constrcutor";
	  }
};
main()
{
   //clrscr();
   B b1;
   C c1;
   getch();
}


