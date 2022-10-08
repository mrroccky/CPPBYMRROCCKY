/*
    Write a program to demonstrate this pointer in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class ThisPointerDemo
{
	int a;
	public:
		    void getValue()
		    {
		    	cout<<"Enter the Value";
		    	cin>>a;
			}
			void displayValue()
			{
				cout<<"\nValue of a variable using this pointer is="<<this->a;
				cout<<"\nAddress of a variable using this pointer is="<<&this->a;
			}
};
main()
{
	ThisPointerDemo t1;
	//clrscr();
	t1.getValue();
	t1.displayValue();
	getch(); 
}
