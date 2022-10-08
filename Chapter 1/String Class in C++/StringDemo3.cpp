/* 
     Write a program to enter string and find out length of string using string class.
                           OR
    Write a program to demonstrate length and size data members of string class.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	 string s;
	 cout<<"Enter the string\n";
	 cin>>s;
	 cout<<"\nLength of entered string is using length function of string class="<<s.length();
	 cout<<"\nLength of entered string is using size function of string class="<<s.size();
	 getch();
	
}
