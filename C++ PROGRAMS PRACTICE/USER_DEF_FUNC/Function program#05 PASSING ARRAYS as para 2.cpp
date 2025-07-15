#include<iostream>
void max(int []);
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter values into array no." <<i+1<<":  \n";
		cin>>a[i];
	}
	max(a);
}
void max(int x[])
{
	int mm=x[0];
	for(int c=0;c<=4;c++)
	{
		if(mm<x[c])
		{
			mm=x[c];
		}
	}
	cout<<"your maximum number is: "<<mm<<endl;
}
