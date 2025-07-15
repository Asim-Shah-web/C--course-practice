#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int sp;
	for (int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<"* ";
			
		}
		cout<<endl;
	}
	
	
	for (int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
			
		}
		cout<<endl;
	}
	
}
