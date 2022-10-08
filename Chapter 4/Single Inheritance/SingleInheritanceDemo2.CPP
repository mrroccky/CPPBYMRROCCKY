/*
    Write a program to demonstrate single inheritance.
    Notes:- Please refer diagram for single inheritance which I told
	    while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	  void functionA()
	  {
	     cout<<"Class A function";
	  }
};
class B:public A
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
