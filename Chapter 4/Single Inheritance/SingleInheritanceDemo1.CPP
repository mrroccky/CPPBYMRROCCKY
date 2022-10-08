/*
   Write a program to demonstrate Single inheritance.

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
    public:
	   void basefn()
	   {
	      cout<<"This is Base Class function";
	   }
};
class Derived:public Base
{
    public:
	   void derivedfn()
	   {
	      cout<<"\nThis is Derived Class function";
	   }
};
main()
{
    Derived d1;
    //clrscr();
    d1.basefn();
    d1.derivedfn();
    getch();
}

/*
    Note:-
	    Que:-1 What is Inheritance?

		  1. The mechanism  of deriving new class
		     from an old one  is called as Inheritance or Derivation.
		  2. Old class is called as Base class or Parent class and
		     new class is called as Derived class or Child class.
		  3. There are following types of Inheritances.

		      1.Single Inheritance.
		      2.Multiple Inheritance.
		      3.Multilevel Inheritance.
		      4.Hybrid Inheritance.
		      5.Hierarchical Inheritance.
		  4.Digram for types of Inheritances  are given below.

		    Note:- Please refer digram from user books.

	    Que:-2 What are advantages of inheritance.

		   1. By using it we use reuse the code.
		   2. It saves the time.
		   3. It is used as extensibility.
*/
