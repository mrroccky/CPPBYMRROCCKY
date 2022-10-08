/*
    Write a program to demonstrate what happen if we inherite
    private member of class using single inheritance.
    Notes:- Please refer diagram for single inheritance which I told
	    while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   int a;
   public:
	  void functionA()
	  {
	     cout<<"Class A function";
	  }
};
class B:private A
{
   public:
	  void functionB()
	  {
	     cout<<"\nClass B function";
	  }
};

main()
{
    B b1;
    //clrscr();
    b1.functionA();
    b1.functionB();
    getch();
}
