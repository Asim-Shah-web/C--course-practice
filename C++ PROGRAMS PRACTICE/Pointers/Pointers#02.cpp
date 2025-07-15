#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *pp;
	pp=arr;
	for(int i=0;i<=4;i++)
	{
		cout<<"enter the value of element no : "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<" now printing------------------------------------"<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<"The value of element no: "<<i+1<<" is: "<<*pp<<endl;
		*pp++;
	}
}
