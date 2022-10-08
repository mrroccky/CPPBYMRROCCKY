#include<iostream>
#include<conio.h>
using namespace std;
class BianryOperatorOverloading
{
	int a,b;
	public:
		   void getdata()
		   {
		   	  cout<<"Enter the numbers";
		   	  cin>>a>>b;
		   } 
		   void operator+(BianryOperatorOverloading c1)
		   {
		  	  cout<<"This is operator Function and we used Binary operator overloading";
		  	  cout<<"\na="<<c1.a<<"\nb="<<c1.b;
		   }
		
};
main()
{
	//clrscr();
	BianryOperatorOverloading b1,b2;
	b2.getdata();
	b1+b2;
	getch();
}
