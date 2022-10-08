/*
    Write a program to demonstrate to access private member of class in inheritance using derived class.
                     OR
    Write a program to demonstrate protected in C++.
    Notes:- Please refer diagram for single inheritance which I told
	    while teaching.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
  protected:
	    int a;
   public:
	  void getdata()
	  {
	     cout<<"Enter the value of a";
	     cin>>a;
	  }
};
class B:public A
{
   public:
	  void display()
	  {
	     cout<<"\nValue of a varaible of Base classs is="<<a;
	  }
};

main()
{
    B b1;
    //clrscr();
    b1.getdata();
    b1.display();;
    getch();
}
