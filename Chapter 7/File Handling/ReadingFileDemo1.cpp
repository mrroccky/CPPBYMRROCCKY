/*
    Write a program to read context of Myfile3.txt into 
    output screen.
*/
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main()
{
	ifstream in;
	int i=0;
	char word[5000];
	in.open("C:\\projects\\ccppjavapythonweb\\cpp\\Chapter 7\\File Handling\\a.txt");//,ios::in);
	if(!in)
	{
		 cout<<"File was not found"; 
	}
	else
	{
		
		while(in>>word)
		{
			cout<<word<<" ";
		}
		cout<<"\n";
		in.close();
	}
	
	getch();
}
