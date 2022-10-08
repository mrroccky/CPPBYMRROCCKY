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
			throw "Divide by Zero Exception";
		 }
		 else
		 {
		 	c=a/b;
		 	cout<<"Division is="<<c;
		 }
		 
	}
	catch(const char *exceptionName)
	{
		cout<<exceptionName;
	}
	getch();
}
