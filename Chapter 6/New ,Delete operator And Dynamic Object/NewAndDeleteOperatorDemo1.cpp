/*
   Write a program to demonstrate new and delete operator.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p;
	//clrscr();
	p=new int;
	cout<<"Enter the value for a\n";
	cin>>*p;
	cout<<"Value of a is="<<*p;
	delete p;
	getch(); 
}
