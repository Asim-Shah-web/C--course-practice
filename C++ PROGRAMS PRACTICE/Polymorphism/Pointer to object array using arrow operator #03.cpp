#include<iostream>
using namespace std;
class shopitem
{
	int id;
	float price;
	public:
		void setdata(int a, float b)
		{
			id=a;
			price=b;
		}
		void getdata()
		{
			cout<<"The code of the item is: "<<id<<endl;
			cout<<"The price of the item is: "<<price<<endl;
		}
};

int main()
{
	int size;
	cout<<"Enter the number of items: ";
	cin>>size;
	shopitem *ptr = new shopitem[size];
	shopitem *ptrtemp=ptr;
	//*ptrtemp = *ptr; dont write this line like this instead see above line code
	int p;
	float q;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the id or code of the item: "<<endl;
		cin>>p;
		cout<<"Enter the price of the item: "<<endl;
		cin>>q;
		ptr->setdata(p,q);
		ptr++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<endl;
		ptrtemp->getdata();
		ptrtemp++;
	}
}
