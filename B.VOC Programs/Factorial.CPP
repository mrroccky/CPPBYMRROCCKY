/*
      What is class and Object? Write a program using class to find 
      factorial of a number.
                           Summer 17 for 7 marks(B.Voc S/W) in R.T.M.N.U
*/
#include<iostream.h>
#include<conio.h>
class Fact
{
    int i,f,n;
    public:
	   void getdata()
	   {
		  cout<<"Enter the number";
		  cin>>n;
	   }
	   void calculate()
	   {
		 f=1;
		 for(i=1;i<=n;i++)
		 {
		   f=f*i;
		 }
		 cout<<"\nFactorial of entered number is="<<f;
	   }
};
main()
{
    Fact f;
    clrscr();
    f.getdata();
    f.calculate();
    getch();
}
