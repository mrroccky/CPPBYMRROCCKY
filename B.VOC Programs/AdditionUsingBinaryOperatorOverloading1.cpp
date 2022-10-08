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
		   void getdata()
		   {
		   	  cout<<"Enter the two numbers\n";
		   	  cin>>a>>b;
		   }
		   Addition operator+(Addition x)
		   {
		   	   Addition add;
			   add.c=x.a+x.b;
			   return (add);	   
		   }
		   void disply()
		   {
		   	  cout<<"Addition is="<<c;
		   }
};
main()
{
	Addition A1,A2,A3;
	//clrscr();
	A2.getdata();
	A3=A1+A2;
    A3.disply();
    getch();
}
