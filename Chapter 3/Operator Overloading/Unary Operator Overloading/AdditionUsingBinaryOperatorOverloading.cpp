/*
     Write a program to demonstrate binary operator overloading.
                    OR
     Write  a program to addd two number using binary operator overloading.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Addition
{
	int a,b,c;
	public:
		   Addition(int a1,int b1,int c)
		   {
		   	   a=a1;
		   	   b=b1;
		   }
		   Addition operator+(Addition x)
		   {
		   	   Addition add;
			   add.c=x.a+x.b;
			   return (add);	   
		   }
		   void display()
		   {
		   	  cout<<"Addition is="<<c;
		   }
};
main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	Addition A1(a,b);
	Addition A2(a,b);
	Addition A3;
	//clrscr();
	A3=A1+A2;
    A3.display();
    getch();
}
