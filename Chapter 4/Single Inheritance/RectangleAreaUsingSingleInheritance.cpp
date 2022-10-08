/* 
    Write a program to implement following Inheriatnce. And calcute area of Rectangle.
    Note:- 
	      1. Diagram for this inheritance is in Image form with same as program name in .jpg or
             .png format.
          2. Please refer that digram for implementation.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
	protected:
	         float length,height;
	public:
		   void inputDimension()
		   {
		   	   cout<<"\nEnter the legnth and height";
		   	   cin>>length>>height;
		   }
};
class AreaOfRectangle: public Rectangle
{
	float area;
	public:
		    void calculateArea()
		    {
		    	area=length*height;
			}
			void result()
			{
				cout<<"\nArea of Rectangle is="<<area;
			}
};
main()
{
	AreaOfRectangle a1;
	//clrscr();
	a1.inputDimension();
	a1.calculateArea();
	a1.result();
	getch();
}
