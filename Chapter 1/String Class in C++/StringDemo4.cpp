/* 
     Write a program to enter two string and compare both strings are equal or not using string class without using 
	 any member function of string class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	  string s1,s2;
	  cout<<"Enter the two strings\n";
	  cin>>s1>>s2;
	  if(s1==s2)
	  {
	  	  cout<<"Both strings are equals";
	  }
	  else
	  {
	  	  cout<<"Both string are not equals";
	  }
	  getch();
	
}
