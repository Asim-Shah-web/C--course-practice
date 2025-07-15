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
			cout<<"Enter The value of Feet: ";
			cin>> feet;
			cout<<"\nEnter the value of inches: ";
			cin>>inches;
		}
		void initialize()
		{
			feet = 0;
			inches = 0;
		}
		void showDist()
		{
		cout<<"The value of Feet is : "<<feet;
		cout<<"\nThe value of inches is : "<<inches<<endl;
		}
};

int main()
{
	Distance d1, d2, d3;
	d1.initialize();
	d1.showDist();
	d1.setDist(5,8.765);
	d1.showDist();
	d2.setDist(5,9.54);
	d2.showDist();
	d3.getDist();
	d3.showDist();
	return 0;
}
