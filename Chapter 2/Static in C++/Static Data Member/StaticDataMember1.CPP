/*
    Write a program to demonstrate static data member.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StaticDemo
{
   static int a;
   public:
	   void get()
	   {
	      cout<<"\nValue of a is="<<a;
	      a++;
	   }
};
int StaticDemo::a;
main()
{
   StaticDemo s1,s2,s3;
   //clrscr();
   s1.get();
   s2.get();
   s3.get();
   getch();
}
/*
   Note:-
	   Characterstics of Static data member:-
	   --------------------------------------
	   --------------------------------------
	   1. It is inialize by 0. When first object of class is created.
	      No another inialization is permitted.
	   2. Only one copy of that member is created for entire class
	      and shared by all the objects of class.
	   3. It is visible only within class but its life is in Entire program.
	   4. Static variable are normally used to maintain values common to the
	      entire class.

	     Syntax of static data member:-

	       class class_name
	       {
		      static data_type variable_name;
		      public:
		               ----------;
		               ----------;
		               ----------;
	      };
	      data_type class_name::variable_name;// definition of static data member.

	     Example:-

	       class StaticDemo
	       {
		   static int a;

		   public:
			  void get()
			  {
			     cout<<"Value of a="<<a;
			  }
	       };

*/
