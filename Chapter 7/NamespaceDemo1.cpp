/*
   Write a program to demonstarte namespace in C++ and define variable in it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
namespace namespace1
{
	int a=10;
}
namespace namespace2
{
      int a=20;
}
main()
{
	//clrscr();
	cout<<"Now we are displaying value of a variable from namespace1="<<namespace1::a;
	cout<<"Now we are displaying value of a variable from namespace2="<<namespace2::a;
}
