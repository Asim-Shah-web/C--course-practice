/*  RETURNING THE VALUE*/
#include<iostream>
using namespace std;
int pl(int,int);
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
	pl(x,y);
	cout<<"\nthe result of the pl function is using in the following code.\n ";
	int product , num1=3;
	/*int sum;
	sum=pl(x,y);*/
	product=num1*pl(x,y);          //problem
	cout<<"\nproduct is = "<<product;
	cout<<"\nstaements after user defined function pl. \n";
	cout<<"Enter 3rd no. \n";
	cin>>q;
	cout<<"Enter 4th no. \n";
	cin>>w;
	pl(q,w);
	
}
int pl(int a,int b)
{
	cout<<"statements within user defined function pl. \n";
	int res;
	res=a+b;
	cout<<res;
	return res;
}

