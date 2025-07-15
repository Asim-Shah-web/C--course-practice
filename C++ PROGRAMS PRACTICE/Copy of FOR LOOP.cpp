#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int table;
	cout<<"Enter any number  ";
	cin>>table;
	cout<<endl;
	for (int o=1;o<=10;o++)
{
	int res;
	res=table*o;
	cout<<table<<"x"<<o<<"="<<res<<"\n";
}


// Q.NO WRITE a program to calculate the sum of odd no. from 1 to 10 and then print ..
int add=0;
for (int c=1;c<=10;c+=2)
{
	add+=c;
	
}
cout<<"\nsum="<<add;


// Q.NO Write a program to print first ten natural numbers using for loop..
for (int n=1;n<=10;n++)
{
	cout<<"\n\n"<<n;
}
getch();
}
