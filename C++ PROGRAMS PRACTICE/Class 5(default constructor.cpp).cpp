#include<iostream>
#include<string>
using namespace std;
class df
{
	private:
	int	 d1,d2,d3;
	public:
		df(int t1,int t2=4,int t3=7)
		{
			d1=t1;
			d2=t2;
			d3=t3;
		}
		void print()
		{
			cout<<"The value of d1,d2 and d3 is: "<<d1<<", "<<d2<<" and "<<d3<<endl;
		}
};
int main()
{
	df e1(3,5),e2(6,6,6);
	e1.print();
	e2.print();	
}
