/*
     Write a program to demonstrator Unary Operator Overloading.
*/
#include<iostream>
#include<conio.h>
class OperatorOverloadingDemo
{
	int x,y,z;
	public:
		   void getdata(int x1,int y1,int z1)
		   {
		   	      x=x1;
		   	      y=y1;
		   	      z=z1;
		   }
		   void operator-()
		   {
		   	  x=-x;
		   	  y=-y;
		   	  z=-z;
		   }
		   
		
};
main()
{
	  OperatorOverloadingDemo c1;
	  //clrscr();
	  c1.getdata(10,-20,30);
	  -c1;
	  getch();
}
