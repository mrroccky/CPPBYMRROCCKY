/* 
     Write a program to enter two string and compare both strings are equal or not using string class using 
	 compare member function of string class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	  string s1,s2;
	  int v;
	  cout<<"Enter the two strings\n";
	  cin>>s1>>s2;
	  v=s1.compare(s2);
	  if(v==0)
	  {
	  	  cout<<"Both strings are equals";
	  }
	  else
	  {
	  	  cout<<"Both string are not equals";
	  }
	  getch();
}
