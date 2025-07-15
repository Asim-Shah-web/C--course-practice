#include<iostream>
#include<string>
using namespace std;

class complex{
	private:
		int a,b;
		static int count;
	public:
		void setdata(int,int);
		void setdatabysum(complex,complex);
		void print();
};
int complex::count;     // static data member must be defined here; 
void complex::setdata(int v1,int v2)
{
	a=v1;
	b=v2;
	count++;
	cout<<"the value of count is: "<<count<<endl;
}
void complex::print()
{
	cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
}
void complex::setdatabysum(complex o1,complex o2)
{
	a=o1.a+o2.a;
	b=o1.b+o2.b;
}
int main()
{
	complex c1,c2,c3;
	c1.setdata(56,78);
	c1.print();
	
	c2.setdata(12,34);
	c2.print();
	
	c3.setdatabysum(c1,c2);
	c3.print();
}
