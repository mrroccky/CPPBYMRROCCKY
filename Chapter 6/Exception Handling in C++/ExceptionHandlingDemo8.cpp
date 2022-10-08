/*
    Write a program to define user define exception for
    "Age is less than 18".
*/
#include<iostream>
#include<exception>
#include<conio.h>
using namespace std;
class ExceptionDemo1:public exception
{
	public:
		    void excptionfn()
		    {
		    	cout<<"Age is less than 18";;
			}
};
main()
{
	int age;
	//clrscr();
	cout<<"Enter the age";
	cin>>age;
	if(age<=18)
	{
			try
			{
				 throw ExceptionDemo1();
			}
			catch(ExceptionDemo1 e)
			{
				cout<<"Exception is=";
				e.excptionfn();
			}
	}
}
