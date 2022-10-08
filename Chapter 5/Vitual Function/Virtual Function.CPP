/*
   Write a program to demonstrate virtual function.
*/
#include<iostream.h>
#include<conio.h>
class A
{
   public:
	  virtual void get()
	  {
	     cout<<"\nThis is function of Base class.";
	  }
};
class B:public A
{
   public:
	  void get()
	  {
	     cout<<"\nThis is function of Derived class.";
	  }
};
main()
{
     A *a1,a2;
     B b1;
     clrscr();
     a1=&a2;
     a1->get();
     a1=&b1;
     a1->get();
     getch();
}

