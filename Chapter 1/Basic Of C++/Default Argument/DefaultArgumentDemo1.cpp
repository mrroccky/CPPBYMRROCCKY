/*
     Write a program to demonstrate deafault argument.
*/
#include<iostream>
using namespace std;
void defaultArgumentDemo(int a,int b,int c=10,int d=20)
{
	cout<<"\nValue of a is="<<a;
	cout<<"\nValue of b is="<<b;
	cout<<"\nValue of c is="<<c;
	cout<<"\nValue of d is="<<d;
}
main()
{
     cout<<"Calling default argument function\n\n";
     defaultArgumentDemo(2,3);
}
