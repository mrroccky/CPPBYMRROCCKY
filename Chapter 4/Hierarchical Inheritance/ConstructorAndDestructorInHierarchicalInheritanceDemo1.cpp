/*
    Write a program to demonstrate Constructor and Destructor in Hierarachical inheritance.
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
	  ~A()
	  {
	     cout<<"\n\n\nThis is Base class Destructor";
	  }
};
class B:public A
{
    public:
	   B()
	   {
	     cout<<"\nThis is Derived class Constructor(i.e) B class Constructor";
	   }
	   ~B()
	   {
	     cout<<"\n\n\nThis is Derived class Destructor(i.e) B class Destructor";
	   }
};
class C:public A
{
   public:
	  C()
	  {
	     cout<<"\nThis is another Derived class Constructor(i.e) C class Constrcutor";
	  }
	  ~C()
	  {
	     cout<<"\n\n\nThis is another Derived class Destructor(i.e) C class Destrcutor";
	  }
};
main()
{
   //clrscr();
   B b1;
   C c1;
   getch();
}


