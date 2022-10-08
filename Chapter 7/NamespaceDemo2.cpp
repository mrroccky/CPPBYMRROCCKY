/*
   Write a program to demonstarte namespace and define function in it in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
namespace Demo1
{
	void functionName1()
	{
		cout<<"\nThis is Function1 and Namespace1 function";
	}
}
namespace Demo2
{
	int functionName1()
	{
		cout<<"\nThis is Function1 and Namespace2 function";
	}
}
main()
{
	//clrscr();
	cout<<"Now we call function of Demo1 namespace\n"<<Demo1::functionName1();
	cout<<"Now we call function of Demo2 namespace\n";
	Demo2::functionName1();
}
