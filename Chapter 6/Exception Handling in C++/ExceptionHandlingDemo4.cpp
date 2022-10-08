/*
    Write a program to demonstrate to caught all type of exception  in C++.
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
	 catch(...)
	 {
		cout<<"\nExceptions of all types are caught";
	 }  
	 
	getch();
}
