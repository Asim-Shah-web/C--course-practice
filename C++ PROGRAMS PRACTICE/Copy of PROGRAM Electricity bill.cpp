#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float cu_read,prev_read,units,bill_amount;
	cout<<"Enter Your current Reading\n";
	cin>>cu_read;
	cout<<"Enter Your previous Reading\n";
	cin>>prev_read;
	units=cu_read-prev_read;
	if(units<=300)
{
	bill_amount=units*3.0;
}
else
{
	float surcharge, bill;
	bill=units*3.5;
	surcharge=bill*5.0/100;
	bill_amount=bill+surcharge;
	
}
cout<<"YOUR CURRENT ELICTRICITY BILL IS "<<bill_amount;
getch();
}
