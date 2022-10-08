/*
      Write a program to define static member in public section.
                          OR
      Write a program to show only one copy of static data me
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StaticDemo
{
   public:
   	      static int a;
};
int StaticDemo::a;
main()
{
   StaticDemo s1,s2,s3;
   //clrscr();
   cout<<"Value of a is using S1 object is="<<StaticDemo::a;
   StaticDemo::a++;
   cout<<"\nValue of a is using S2 object is="<<s2.a;
   cout<<"\nValue of a is using S1 object is="<<s1.a;
   getch();
}
