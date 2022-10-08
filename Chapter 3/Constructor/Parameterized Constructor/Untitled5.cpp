/*
     Write a program to demonstrate  Parameterized constructor in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a;
	public:
		    A()
		    {
		    	
			}
		    A(int a1)
		    {
		    	a=a1;
			}
};
main()
{
	A a1;
	//clrscr();
	a1(2);
	getch();
}
