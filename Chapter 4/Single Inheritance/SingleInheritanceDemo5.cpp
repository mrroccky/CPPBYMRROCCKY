/*
   Write a program to demonstrate Single inheritance(Using OutSide class defination).

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
    public:
		   void basefn();
	   
};
void Base::basefn()
{
	  cout<<"This is Base Class function";
}
class Derived:public Base
{
    public:
		   void derivedfn();
	   
};
void Derived::derivedfn()
{
	 cout<<"\nThis is Derived Class function";
}
main()
{
    Derived d1;
    //clrscr();
    d1.basefn();
    d1.derivedfn();
    getch();
}

