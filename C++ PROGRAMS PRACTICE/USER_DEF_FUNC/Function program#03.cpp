#include<iostream>
using namespace std;
void asim(int,int);
void displaymessage()
{
	cout<<"lets work with functions\n";
}
int main()
{  
    int x,y,q,w;
	cout<<"statements inside main function. \n";
	displaymessage();
	cout<<"Enter 1st no. \n";
	cin>>x;
	cout<<"Enter 2nd no. \n";
	cin>>y;
	asim(x,y);
	cout<<"\nstaements after user defined function asim \n";
	cout<<"Enter 3rd no. \n";
	cin>>q;
	cout<<"Enter 4th no. \n";
	cin>>w;
	asim(q,w);
}
void asim (int a,int b)
{
	cout<<"statements within user defined function asim \n";
	int res;
	res=a+b;
	cout<<res;
}
