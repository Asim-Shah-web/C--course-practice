#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)

*/

class base1
{
	int data1;
	public:
		base1(int n)
		{
			data1=n;
			cout<<"Constructor for base1 is called -----"<<endl;
		}
		void print1()
		{
			cout<<"The value of data1 is : "<<data1<<endl;
		}
};

class base2
{
	int data2;
	public:
		base2(int r)
		{
			data2=r;
			cout<<"Constructor for base2 class is called -----"<<endl;
		}
		void print2()
		{
			cout<<"The value of data2 is : "<<data2<<endl;
		}
};
class derived : public base1, public base2
{
	int derived1,derived2;
	public:
		derived(int a,int b,int c,int d) : base2(c),base1(d)
		{
			derived1=a;
			derived2=b;
			cout<<"Constructor for derived class is called -----"<<endl;
		}
		void printd()
		{
			cout<<"The value of derived1 is : "<<derived1<<endl;
			cout<<"The value of derived2 is : "<<derived2<<endl;
		}
};

int main()
{
	derived dd(1,2,3,4);
	dd.print1();
	dd.print2();
	dd.printd();
}

