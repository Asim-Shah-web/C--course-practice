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
