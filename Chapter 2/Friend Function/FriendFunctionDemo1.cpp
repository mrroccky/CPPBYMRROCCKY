/*
     Write a program to find mean of two entered number using friend function.
                                 OR
     Write a program to demonstrate friend function.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
	 float x,y;
	 public:
            void getdata();
	        friend void mean(Sample);
};
void Sample::getdata()
{
	cout<<"Enter the two numbers\n";
	cin>>x>>y;
}
void mean(Sample s1)
{
	 float cal;
	 cal=(s1.x+s1.y)/2;
	 cout<<"\nMean of two numbers is="<<cal;

}
main()
{
	Sample s1;
	//clrscr();
	s1.getdata();
	mean(s1);
	getch();
}
