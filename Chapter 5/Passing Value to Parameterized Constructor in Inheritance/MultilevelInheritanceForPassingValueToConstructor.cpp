#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  A(int a)
	  {
	     cout<<"\nThis is Base class Parameterized constructor";
	  }
};
class B
{
    public:
	   B(int a,int b)
	   {
	     cout<<"\nThis is another Base class Parameterized Constructor";
	   }
};
class C:public A,public B
{
   public:
	  C(int b):B(2,3),A(2)
	  {
	     cout<<"\nThis is function of Derived class Constructor";
	  }
};
main()
{
   C c1(2);
   //clrscr();
   getch();
}


