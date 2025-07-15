#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		void setDist(int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		void getDist()
		{
			cout<<"\nEnter The value of Feet: ";
			cin>> feet;
			cout<<"\nEnter the value of inches: ";
			cin>>inches;
		}
		Distance() : feet(0), inches(0.0)
		{

		}
		Distance(int f, float i)
		{
			feet = f;
			inches = i;
		}
		void showDist()
		{
		cout<<"\nThe value of Feet is : "<<feet;
		cout<<"\nThe value of inches is : "<<inches<<endl;
		}
};

int main()
{
	Distance d1, d2(5,7.8765), d3;
	d1.showDist();
	d1.setDist(5,8.765);
	d1.showDist();
	d2.showDist();
	d3.getDist();
	d3.showDist();
	return 0;
}
