#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *x,*y;
	a=10;
	b=20;
	x=&a;
	y=&b;
	cout<<"memory address of variable a is: "<<x<<endl;
	cout<<"memory address of variable b is: "<<y<<endl;
	cout<<"Value in memory address x: "<<*x<<endl;
	cout<<"Value in memory address y: "<<*y<<endl;
	int *p;
	int t;
	p=&t;
	cout<<"Enter a number: ";
	cin>>*p;
	cout<<"Value in memory address p: "<<t<<endl;
	cout<<"memory address of variable t is: "<<p<<endl;
}












