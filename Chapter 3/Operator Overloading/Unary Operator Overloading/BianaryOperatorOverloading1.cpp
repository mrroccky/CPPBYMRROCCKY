/*
     Write a program to demonstrate binary operator overloading.
*/
#include<iostream>
#include<conio.h>
class BianaryOperatorOverloading1
{
	int a,b;
	public:
		   void getdata()
		   {
		   	   cout<<"Enter the numbers";
		   	   cin
		   }
		   void operator+(BianaryOperatorOverloading1 c1)
		   {
		   	  cout<<"This is Operator Function using binary operator overloading";
		   	  cout<<"\nAnd Value of a and b is="<<c1.a<<c1.b;
		   }
};
main()
