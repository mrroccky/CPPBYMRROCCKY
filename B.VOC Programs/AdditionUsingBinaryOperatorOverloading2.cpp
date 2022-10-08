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
		   void operator+(Addition x)
		   {
			   c=x.a+x.b;
			   cout<<"\nAddition is"<<c;
		   }
		   void display()
		   {
		   	  cout<<"Addition is=="<<c;
		   }
};
main()
{
	Addition A1,B1;
	//clrscr();
	B1.getdata();
	A1+B1;
    getch();
}
