/*
      Write a program to demonstrate class and object.
                   OR
      Write a program to enter and display value using class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class ClassDemo
{
	 int a;
	 public:
	 	    void get()
	 	    {
	 	    	cout<<"Enter the number";
				cin>>a;	
			}
			void print()
			{
				cout<<"Entered value of a is="<<a;
			}
};
main()
{
    ClassDemo c1;
	//clrscr();
	c1.get();
	c1.print();
	getch();	
}
