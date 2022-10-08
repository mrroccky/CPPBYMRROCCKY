/*
    Write a program to demonstrate static member function.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StaticDemo1
{
   static int a;
   public:
       static void get();

};
int StaticDemo1::a;
void StaticDemo1::get()
{
    cout<<"\nValue of a is="<<a;
}
main()
{
   //clrscr();
   StaticDemo1::get();
   getch();
}

/* Note:-
	   Characterstics of Static Member Function.
	   -----------------------------------------
	   -----------------------------------------
	     1. It can have access to other static members(Staic variable
		    and Member function) declared in same class.
	     2. It must not be virtual.
	     3. It does not have this pointer.
	     4. It is called by class name instend of object.
___________________________________________________________________________________________________
____________________________________________________________________________________________________


	   Syntax Static member function.
	   ---------------------------------
	   ---------------------------------
	     static return_type function_name(parametres)
	     {
		-------------------------;
		-------------------------;
		-------------------------;
	     }

	   Example:-

	      static void get()
	      {
		 cout<<"This is Static Function";
	      }

__________________________________________________________________________________________________
___________________________________________________________________________________________________

	  How to access static data member.
	  ---------------------------------
	  ---------------------------------
	     1. It is called by class name instend of object.
	     2. Syntax for calling static member function is

		 classname::static_method_name();

	       Example

		 StaticDemo1::get();
__________________________________________________________________________________________________________
__________________________________________________________________________________________________________
*/
