/*
    Write a program to demonstrate bad_alloc exception in C++.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	 int *p;
	 try
	 {
		 p=new int[1234567890123];
     }
	 catch(bad_alloc ex)
	 {
		cout<<"\nMemory is not created="<<ex.what();
	 }
	getch();
}
