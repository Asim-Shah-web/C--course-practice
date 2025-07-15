#include<iostream>
using namespace std;
void asim();
int main()
{
	cout<<"statements inside main function. \n";
	asim();
	cout<<"staements after user defined function asim \n";
	asim();
}
void asim ()
{
	cout<<"statements within user defined function asim \n";
}
