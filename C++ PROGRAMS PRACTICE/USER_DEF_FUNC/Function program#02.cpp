#include<iostream>
using namespace std;
void asim();
int main()
{
	cout<<"statements inside main function. \n";
	/* if values are written here in main function, then it cannot be used in other user defined functions int a=1,b=2;*/
	
	asim();
	cout<<"\nstaements after user defined function asim \n";
	asim();
}
void asim ()
{
	cout<<"statements within user defined function asim \n";
	int a=1,b=2;
	int c;
	c=a+b;
	cout<<c;
	
}
