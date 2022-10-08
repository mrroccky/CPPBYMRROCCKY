/*
    Write a program to create file using C++.
*/
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
	ofstream out ;
	//clrscr();
	out.open("Myfile1.txt",ios::out);
	if(!out)
	{
		cout<<"File is not exit or Created";
	}
	else
	{
		cout<<"File is exit or Created";
	}
    getch();
}
