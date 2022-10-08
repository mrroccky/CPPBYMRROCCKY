/*
     Implement class a circle. Include constructor in its which accept value of
     radius from user. Include two more functions in it. One of which calculates
     area and circumference of circle and the other prints answers.
	
*/
#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
     float radius,areac,circ;
     public:
	    circle();
	    void areacir();
	    void circum();
	    void print();
};

circle::circle()
{

  cout<<"Enter the radius";
  cin>>radius;
}
void circle::areacir()
{
    areac=3.14*radius*radius;
}
void circle::circum()
{
     circ=2*3.14*radius;
}
void circle::print()
{
   cout<<"\nArea of circle is="<<areac;
   cout<<"\nCircumference of circle is="<<circ;
}

main()
{
  // clrscr();
   circle c1;
   c1.areacir();
   c1.circum();
   c1.print();
   getch();
}
