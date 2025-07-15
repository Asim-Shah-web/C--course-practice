#include<iostream>
using namespace std;
class Increment
{
	private:
		int count;
		const int increment;
	public:
		Increment(int c=0 ,int i=1 ) : count(c), increment(i)
		{
			
		}
	void addIncrement()
	{
		count = count + increment;
	}
	void print() const
	{
		cout<<"\nValue of count = "<<count<<endl;
	}
};
int main()
{
	Increment obj1(5,10);
	Increment obj2;
	cout<<"\nCalling addIncrement() method of obj1"<<endl;
	obj1.addIncrement();
	obj1.print();
	obj1.addIncrement();
	obj1.print();
	cout<<"\nCalling addIncrement() method of obj2"<<endl;
	obj2.addIncrement();
	obj2.print();
	return 0;
}
