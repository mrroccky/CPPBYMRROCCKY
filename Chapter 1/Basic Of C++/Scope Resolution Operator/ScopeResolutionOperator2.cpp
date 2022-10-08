/*
     Write a program to demonstrate scope resolution operator.
*/
#include<iostream>
using namespace std;
main()
{
	int a=10;
	{
		int b=20;
	}
	cout<<"Value of local variable a is="<<a;
	cout<<"Value of local variable a is="<<::b;
	
}
