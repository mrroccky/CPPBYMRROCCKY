/*
    Write a program to create file called as "MyFile3.txt"
	and add data which is taken by keyboard in append mode into it using C++.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
	ofstream out ;
	char a[5000];
	//clrscr();
	out.open("Myfile3.txt",ios::app);
	if(!out)
	{
		cout<<"File is not exit or Created";
		
	}
	else
	{
		cout<<"File is exit or Created\n";
		cout<<"Enter the data for file\n";
		gets(a);
		out<<a;
	}
	out.close();
    getch();
}
