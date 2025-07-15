#include<iostream>
using namespace std;
int main()
{
	void swap(int* , int* );
	int a,b;
	cout<<"Enter the first value: "<<endl; cin>>a;
	cout<<"Enter the second value: "<<endl; cin>>b;
	swap(&a,&b);
	cout<<"values after swapping--------------------"<<endl<<endl;
	cout<<"The swapped value of a: "<<a<<endl;
	cout<<"The swapped value of b: "<<b<<endl;
	
}

void swap(int* x,int* y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
