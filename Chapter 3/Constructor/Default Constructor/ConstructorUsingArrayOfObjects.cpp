/* 
     Write a program to if we define constructor and make Array of Object using new operator.
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
};
main()
{
    //clrscr();
    A a1[5];
    getch();

}
