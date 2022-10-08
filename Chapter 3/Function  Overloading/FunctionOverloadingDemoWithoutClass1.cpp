/*
    Write a program to demonstrate function overloading without using class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
void get()
{
	 cout<<"\nThis is function overloading Demo and get function with no argument";
}
void get(int a)
{
	 cout<<"\nThis is function overloading Demo and get function with one argument";
}
void get(int a,float b)
{
	 cout<<"\nThis is function overloading Demo and get function with two arguments";
}
main()
{
	//clrscr();
	get();
	get(1);
	get(1,2.1);
}
