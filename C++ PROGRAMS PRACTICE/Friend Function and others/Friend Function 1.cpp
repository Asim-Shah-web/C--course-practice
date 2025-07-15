#include<iostream>
using namespace std;
class Box
{
	private:
		int length;
	public:
		Box() : length(0)
		{
			
		}
		void setLength(int a)
		{
			length = a;
		}
	friend int printLength(Box);
};
int printLength(Box b)
{
	return b.length;
}
int main()
{
	Box obj1;
	int l;
	cout<<"Enter the lenght of the box: "<<endl;
	cin>> l;
	obj1.setLength(l);
	cout<<"The lenght of the box = "<<printLength(obj1);
}
