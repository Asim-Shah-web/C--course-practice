
   //Q.NO.6: WRITE A PROGRAM IN C++ TO INPUT YOUR NAME,ADDRESS AND AGE DURING PROGRAM EXECUTION AND THEN PRINT IT ON THE SCREEN. 
  
#include<iostream>
#include<conio.h>
using namespace std;
int  main()

{	
  string name,address;
  int age;
  cout<<"Please Enter your Name\n ";
  getline(cin,name);
  cout<<"Please Enter your address \n";
  getline(cin,address);
  cout<<"Please Enter your Age\n";
  cin>>age;
  cout<<"Your Name Is "<<name;
  cout<<endl;
  cout<<"Your Address Is "<<address;
  cout<<endl;
  cout<<"Your Age Is "<<age;
  getch();
}	
	
	


 
