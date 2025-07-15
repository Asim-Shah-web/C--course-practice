//Q.NO.5: Write a program to calculate the radius of a circle (radius=pi*r*r , pi= 3.14 .
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float pi=3.14,r,rad;
	cout<<"Please Enter r \n";
    cin>>r;
    rad=pi*(r*r);
    cout<<"The Radius of a circle is "<<rad;
    getch();
 
   }
 
 
   //Q.NO.6: WRITE A PROGRAM IN C++ TO INPUT YOUR NAME,ADDRESS AND AGE DURING PROGRAM EXECUTION AND THEN PRINT IT ON THE SCREEN. 
  
#include<iostream>
#include<conio.h>
using namespace std;
  int  main()
{

string name ,address;
int age;
cout<<"Please Enter your Name\n ";
cin>>name;
cout<<endl;
cout<<"Please Enter your address\n";
getline(cin, address);
cin>>address;
cout<<"\nplease Enter your Age\n";
cin>>age;
cout<<endl;
cout<<"Your Name Is "<<name;
cout<<endl;
cout<<"Your Address Is "<<address;
cout<<endl;
cout<<"Your Age Is "<<age;
getch();
}
 

 // Q.NO.7: Write a program in C++ to input an amount in rupees and then to convert it into dollars and print it on the screen (1 Dollar=RS.99).
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
{

float rup,dollar;
cout<<"Please Enter the Amount in Rupees \n";
cin>>rup;
dollar=rup/99;
cout<<"Amount in Dollars "<<dollar;
getch();
}

//Q.NO.8: Write a program in c++ to input your age in years.Convert the age in months,days,hours,minutes & seconds and then print all these values on the screen .
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float years, months,days,minutes,seconds,hours;
	cout<<"Enter your age in years \n";
	cin>>years;
	months=years*12;
	days=365*years;
	hours=365*years*24;
	minutes=365*years*24*60;
	seconds=365*years*24*60*60;
	cout<<"Your age in Months is  "<<months<<"\n";
	cout<<"Your age in Days is  "<<days<<"\n";
	cout<<"Your age in Hours is  "<<hours<<"\n";
	cout<<"Your age in Minutes is  "<<minutes<<"\n";
	cout<<"Your age in Seconds is  "<<seconds<<"\n";
	getch();
	
	}
	












