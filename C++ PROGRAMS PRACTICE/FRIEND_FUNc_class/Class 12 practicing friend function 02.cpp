#include<iostream>
#include<string>
using namespace std;
class complex;
class calculator{
	public:
		int add(int a,int b)
		{
			return(a+b);
		}
		int sumrealcomp(complex,complex);
		int sumcomcomp(complex o1,complex o2);
};

class complex{
	int a,b;
	friend int calculator::sumrealcomp(complex,complex);
	friend int calculator::sumcomcomp(complex,complex); 
	public:
		void ass(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		void print()
		{
			cout<<"The sum of real and complex part is: "<<a<<" + "<<b<<"i"<<endl;
		}
		
};
int calculator::sumrealcomp(complex o1,complex o2)
{
	return(o1.a+o2.a);
}
int calculator::sumcomcomp(complex o1,complex o2)
{
    return(o1.b+o2.b);
}
int main()
{
	complex c1,c2;
	c1.ass(5,6);
	c1.print();
	c2.ass(7,8);
	c2.print();
	calculator cal;
	int res=cal.sumrealcomp(c1,c2);
	cout<<"The sum of real partof o1 and o2 is: "<<res<<endl;
	int resc=cal.sumcomcomp(c1,c2);
	cout<<"The sum of complex part of o1 and o2 is: "<<resc<<endl;
	
}
