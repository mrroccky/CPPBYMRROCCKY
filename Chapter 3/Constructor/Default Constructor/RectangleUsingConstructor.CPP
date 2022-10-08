/*
    Implement a class rectangle.Accepting its length and width as float in default constructor. 
	Include area function which will calculate area of rectangle.
			
*/
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
   float length,width,cal;
   public:
	      rectangle();
	      void area();
};
rectangle::rectangle()
{

    cout<<"Enter the length and width";
    cin>>length>>width;
}
void rectangle::area()
{
    cal=length*width;
    cout<<"\nArea of rectangle="<<cal;
}
main()
{
	//clrscr();
    rectangle r1;
    r1.area();
    getch();
}
