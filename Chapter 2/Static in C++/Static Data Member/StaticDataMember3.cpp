/*
    Write a program to demonstrate static data member.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StaticDemo
{
   static int a,b;
   public:
	   void get()
	   {
	      cout<<"\nValue of a is="<<a;
	      cout<<"\nValue of b is="<<b;
	      a++;
	      b++;
	   }
};
int StaticDemo::a,b;
main()
{
   StaticDemo s1,s2,s3;
   //clrscr();
   s1.get();
   s2.get();
   s3.get();
   getch();
}
