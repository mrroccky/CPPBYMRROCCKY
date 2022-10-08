/*
    Write a program to demonstrate excepton in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	 try
	 {
	 	cout<<"Try block is executed";
		throw 0;
	}
	catch(int a)
	{
		cout<<"\nCatch block is executed";
	}
	getch();
}
