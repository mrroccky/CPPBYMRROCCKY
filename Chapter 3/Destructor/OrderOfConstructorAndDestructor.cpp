/*
     Write a program to demonstrate order of constructor and destructor invoked.
                             OR
     Write a program to demonstrate static with constructor and destructor with 
	 static data member. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	static int count;
	public:
		    A()
		    {
		    	count++;
		    	cout<<"\nConstructor is invoked="<<count;
			}
		   ~A()
		   {
		   	   cout<<"\nDestructor is invoked="<<count;
		   	   count--;
		   }
};
int A::count;
main()
{
	A a1,a2,a3,a4;
	getch();
}
