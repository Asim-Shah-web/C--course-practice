//NAME ASIM SHAH ROLL NO. 231120 SEC-A         BS COMP SCIENCE     1ST SEMESTER
//BUBBLE SORT

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Numbers of your choice\n";
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		arr[i]=num;
	}
	for(int c=0;c<n-1;c++)
	{
		for(int i=0;i<n-c;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	cout<<"sorted values"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
 } 
