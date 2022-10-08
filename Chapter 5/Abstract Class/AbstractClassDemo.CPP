/*
   Write a program to demonstrate abstract class.
*/
#include<iostream.h>
#include<conio.h>
class A
{
    public:
	    virtual void functionA()=0;
};
class B:public A
{
     public:
	    void functionA()
	    {
	      cout<<"\nThis is function of A(Base class)";
	    }
	    void functionB()
	    {
	       cout<<"\nThis is function of B(Derived class)";
	    }
};
main()
{
    B b1;
    clrscr();
    b1.functionA();
    b1.functionB();
    getch();
}