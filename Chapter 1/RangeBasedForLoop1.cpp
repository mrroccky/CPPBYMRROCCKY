/*
   Write a program to demonstrate range based for loop in C++.
*/
#include<iostream>
using namespace::std;
main()
{
	int a[]={1,2,3,4,5};
	for(int i:a)
	{
	   cout<<"\nValue of a[="<<i<<"]"<<i;
	}
}
/*
   Note:-
         1.It works from C++11 standard of C++.
         2.It works only compiler which supports C++11 standard.
*/
