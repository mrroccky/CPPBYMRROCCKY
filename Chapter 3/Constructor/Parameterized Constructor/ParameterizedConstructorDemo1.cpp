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
		    A(int a1)
		    {
		    	a=a1;
			}
			void display()
			{
				cout<<"Value of a is="<<a;
			}
};
main()
{
	//clrscr();
	A a1(10);
	a1.display();
	getch();
}
