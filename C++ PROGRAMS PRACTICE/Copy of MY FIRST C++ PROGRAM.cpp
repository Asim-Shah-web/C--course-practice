#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
int balance=0 , depositAmount; 
cout<<"I will add deposit amount to your current balance";
cout<<endl;
cout<<"Enter deposit amount\n";
cin>>depositAmount;  
balance= balance + depositAmount;
cout<<"Your new balance="<<balance;
cout<<endl;
cout<<"Enter deposit amount\n";
cin>>depositAmount;
balance+=depositAmount;
cout<<"Your new balance="<<balance;
cout<<endl;
getch();
}
										   
