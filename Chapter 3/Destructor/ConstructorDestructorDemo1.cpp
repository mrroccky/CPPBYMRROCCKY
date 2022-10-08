/*
    Write a program to demonstrate destructor.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		    A()
		    {
		    	cout<<"\nConstructor is invoked";
			}
		   ~A()
		   {
		   	   cout<<"\nDestructor is invoked";
		   }
};
main()
{
	A a1;
	getch();
}
