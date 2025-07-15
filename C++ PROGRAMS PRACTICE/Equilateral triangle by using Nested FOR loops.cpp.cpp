#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//int s,c;
	for(int s=20,c=1;c<=10;c+=2,s--)
	{
		cout<<setw(s);
		for(int i=1;i<=c;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	} //another
	for(int i=1;i<=5;i++)
	{
		for(int sp=i;sp<=5;sp++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	 } //another one
	  	for(int i=1;i<=6;i++)
	{
		for(int sp=1;sp<=i;sp++)
		{
			cout<<" ";
		}
		for(int j=6;j>=i;j--)
		{
			cout<<"X";
		}
		cout<<endl;
	 }
}
