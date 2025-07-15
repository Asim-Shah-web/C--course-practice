 // Q.NO.7: Write a program in C++ to input an amount in rupees and then to convert it into dollars and print it on the screen (1 Dollar=RS.99).
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
{

float rup,dollar;
cout<<"Please Enter the Amount in Rupees \n";
cin>>rup;
dollar=rup/310;
cout<<"Amount in Dollars "<<dollar;
getch();
}
