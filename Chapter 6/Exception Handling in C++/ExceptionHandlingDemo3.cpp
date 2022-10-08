/*
    Write a program to demonstrate mutiple catch in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	 float a;
	 try
	 {
		throw 'a';
	 }
	 catch(int a)
	 {
		cout<<"\nCatch block is executed for int and throw value is="<<a;
	 } 
	 catch(float a)
	 {
		cout<<"\nCatch block is executed for float and throw value value is="<<a;
	 } 
	 catch(double a)
	 {
		cout<<"\nCatch block is executed for double and throw value value is="<<a;
	 } 
	 catch(char a)
	 {
		cout<<"\nCatch block is executed for char and throw value value is="<<a;
	 } 
	 
	getch();
}
