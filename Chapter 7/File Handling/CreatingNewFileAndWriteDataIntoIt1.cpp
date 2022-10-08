/*
    Write a program to create file called as "MyFile2.txt"
	and add data into it using C++.
*/
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
	ofstream out ;
	//clrscr();
	out.open("Myfile2.txt",ios::out);
	if(!out)
	{
		cout<<"File is not exit or Created";
		
	}
	else
	{
		cout<<"File is exit or Created";
		out<<"My name is chetan and I created This File";
	}
	out.close();
    getch();
}
