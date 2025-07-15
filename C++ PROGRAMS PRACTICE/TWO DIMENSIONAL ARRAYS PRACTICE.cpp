#include<iostream>
using namespace std;
int main()
{
	int abc[5][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12},{13, 14, 15}};
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<abc[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n************************************************************\n\n";
	int stmarks[5][3];
		for(int i=0;i<=4;i++)
	{
		cout<<"Enter marks of Student "<<i+1<<endl;
		for(int j=0;j<=2;j++)
		{
			cout<<"Enter marks of subject "<<j+1<<"\n";
			cin>>stmarks[i][j];
		}
		cout<<endl;
	}
		cout<<"\n\n*******************************************************************\n\n";
	for(int i=0;i<=4;i++)
	{
	cout<<"marks of student "<<i+1<<endl;
		
		for(int j=0;j<=2;j++)
		{
			cout<<"marks of subject no."<<j+1<<"= "<<stmarks[i][j]<<"\t";
		}
		cout<<endl;
    }
}
