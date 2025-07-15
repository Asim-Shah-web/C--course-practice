#include<iostream>
#include<conio.h>
void find(int [],int );
using namespace std;
int main()
{
	int arr[10],n=0;
	cout<<"Enter values into array ?\n";
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number to find ?\n";
	cin>>n;
	find(arr,n);
	getch();
}
void find(int x[],int a)
{
	int p=0;
	for(int c=0;c<=9;c++)
	{
		if(a==x[c])
		{
			p=c;
			break;
		}
	}
	if(p==0)
	{
		cout<<"Number not found";
	}
	else
	{
		cout<<"Number found at position no: "<<p+1;
	}
}
