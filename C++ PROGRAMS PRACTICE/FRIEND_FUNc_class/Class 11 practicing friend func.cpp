#include<iostream>
#include<string>
using namespace std;

class complex{
	private:
		int a,b;
	public:
		void setter(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		friend complex /*return type*/ sumcomp(complex o1,complex o2);
		void print()
		{
			cout<<"The sum of 'a' and 'b' is: "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex sumcomp(complex o1,complex o2)
{
	complex c3;
	c3.setter((o1.a+o2.a),(o1.b+o2.b));
	return c3;
}
int main()
{
	complex c1,c2,res;
	c1.setter(5,9);
	c2.setter(7,8);
	c1.print();
	c2.print();
	
    res=sumcomp(c1,c2);
	res.print();
}
