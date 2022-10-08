/*
    Write a program to demonstrate destructor.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		   ~A()
		   {
		   	   cout<<"\nDestructor is invoked";
		   }
};
main()
{
	A a1;
	getch();
}
/*
 Destructor:-
       -------------
       -------------
	  1.Destructor is special member it invoked when object
	    goes out of scope or when object is no longer need.
	  2.Destructor is followed by tilde(~) operator.
	  3.We can not perform destructor overloading.
	  4.It do not have any argument.
	  5.It always invoked anti-clock wise.
	  6.Syntax:-

	     class class_name
	     {
		 public:
			~class_name()
			 {

			 }
	     };
	  7.Example:-
	     class Student
	     {
		public:
		       ~Student()
			   {
			     cout<<"Destructor is invoked";
			   }
	     };



	  Property OR Rules of Destrutor:-
	  ---------------------------------
	  ---------------------------------
	  1.Destructor have same name as class name
	    followed by class name.
	  2.It dont take argument and do not return value.
	  3.It is declared in public.
	  4.It invoked when object is no longer needed.
	  5. It may be virtual.
*/


