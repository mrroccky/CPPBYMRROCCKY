/*
     Write a program to demonstrate scope resolution operator.
*/
#include<iostream>
using namespace std;
int a=20;
main()
{
	int a=10;
	cout<<"Value of local variable a is="<<a;
	cout<<"\nValue of global variable a is="<<::a;
}
