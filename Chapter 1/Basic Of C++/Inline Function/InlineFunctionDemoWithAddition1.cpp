/*
     Write a program to demonstrate inline function.
*/
#include<iostream>
using namespace std;
int inlineFunctionDemoWithAddition(int a, int b)
{
	return(a+b);
}
main()
{
     int a,b;
     cout<<"Enter the two numbers\n";
     cin>>a>>b;
     cout<<"\nAddition is="<<inlineFunctionDemoWithAddition(a,b);
}
