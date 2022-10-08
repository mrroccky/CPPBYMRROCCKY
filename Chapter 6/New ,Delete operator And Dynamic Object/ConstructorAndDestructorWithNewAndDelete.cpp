/* 
     Write a program to demonstrate default constructor with Dynamic Object.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
	   A()
	   {
	      cout<<"\nConstructor is invoked";
	   }
	   ~A()
	   {
	   	  cout<<"\nDestructor is invoked";
	   }
};
main()
{
    //clrscr();
    A *a1;
    a1=new A;
    delete a1;
    getch();

}
