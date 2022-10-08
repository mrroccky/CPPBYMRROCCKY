/* 
     Write a program to demonstrate default constructor.
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
    a1=new A[5];
    delete a1;
    getch();

}
/*
   Note:-

       Constructor:-
       --------------
       --------------

	  1.Constructor is special member function which have
	    same as class name.
	  2.It is used to inialize object.
	  3.It is invoked when object is created.
	  4.It is created in clock-wise.
	  5.There are three type of constructor.
	      1.Default constructor.
	      2.Parameter constructor.
	      3.Copy constructor.
	  6.Syntax of constructor.

	    class class_name
	    {
	      public:
		     class_name()
		     {
		     }
	    };
	  7.Example:-
	     class Student
	     {
		public:
			Student()
			{
			   cout<<"This is constructor".
			}
	     };
	  Property OR Rules of Construtor:-
	  ---------------------------------
	  ---------------------------------
	  1.Constructor have same name as class name.
	  2.Constructor should be declared in public.
	  3.We can perform constructor overloading.
	  4.Constructor can not be virtual.
	  5.Constructor is invoked when object is invoked.
	  6.Constructor do not have return type even void.
	  7.Constructor never be inherited to derived class.

---------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------
*/
