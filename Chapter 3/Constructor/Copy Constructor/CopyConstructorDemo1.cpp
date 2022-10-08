/*
    Write a program to demonstrate Copy constructor in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class CopyConstructorDemo
{
	int a;
	public:
		   CopyConstructorDemo()
		   {
		   	   a=10;
		   }
		   CopyConstructorDemo(CopyConstructorDemo &s1)
		   {
		   	  cout<<"Value of a variable is="<<s1.a;
		   }
		   
};
main()
{
	  CopyConstructorDemo c1;
	  CopyConstructorDemo c2(c1);
	  getch();
}
