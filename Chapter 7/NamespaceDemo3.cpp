/*
   Write a program to demonstarte namespace and define function in it in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
namespace namespaceClass
{
	class A
	{
		
		public:
			int b;
			
	}; 
	A a1;
	
}
namespace Demo2
{
	void functionName1()
	{
		cout<<"\nThis is Function1 and Namespace2 function";
	}
}
main()
{
	//clrscr();
	cout<<namespaceClass::b;
    
}
