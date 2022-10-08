/*
    Write a program to Divide by Zero  in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	 float a,b,c;
	 //clrscr();
	 cout<<"Enter the numbers";
	 cin>>a>>b;
	 try
	 {
		 if(b==0)
		 {
			throw 0;
		 }
		 else
		 {
		 	c=a/b;
		 	cout<<"Division is="<<c;
		 }
		 
	}
	catch(int a)
	{
		cout<<"Divide By Zero Exception";
	}
	getch();
}
