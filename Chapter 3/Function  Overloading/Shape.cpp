/*
     Write a program to demonstrate function Overloading using class.
                                OR
	 Write a program to define class Shape and that calculate area of circle and triangle  with area 
	 function that are overloaded using function Overloading.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
	 float radius,base,height,cal;
	 public:
			void area(float r)
			{
				radius=r;
				cal=3.14*radius*radius;
				cout<<"Area of Circle is="<<cal;
			}
			void area(float b,float h)
			{
		 		 base=b;
				 height=h;
				 cal=0.5*base*height;
				 cout<<"\nArea of Triangle="<<cal;
			}
};
main()
{
      float r,b,h;
      Shape s1;
     //clrscr();
      cout<<"Enter the Radius,Base and Height\n";
      cin>>r>>b>>h;
      s1.area(2.5);
      s1.area(2.3,1.2);
      getch();
     
}     
