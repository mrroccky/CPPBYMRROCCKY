/*
    Write a program to define user define exception for
    "No is negative".
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
		    	cout<<"Number is Negative";;
			}
};
main()
{
	int n;
	//clrscr();
	cout<<"Enter the number";
	cin>>n;
	if(n<0)
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
