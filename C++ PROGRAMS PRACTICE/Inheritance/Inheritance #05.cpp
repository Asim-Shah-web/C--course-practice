#include<iostream>
using namespace std;
class base1
{
	protected:
		int base1int;
	public:
		void setvalue1(int n)
		{
			base1int = n;
		}
};
class base2
{
	protected:
		int base2int;
	public:
		void setvalue2(int n)
		{
			base2int = n;
		}
};
class base3
{
	protected:
		int base3int;
	public:
		void setvalue3(int n)
		{
			base3int = n;
		}
};

class derived : public base1, public base2,public base3
{
	public:
		void show()
		{
		    cout<<"The value of base1 is: "<<base1int<<endl;
		    cout<<"The value of base2 is: "<<base2int<<endl;
		    cout<<"The value of base3 is: "<<base3int<<endl;
	    	cout<<"The sum of the values of all the bases is: "<<base1int+base2int+base3int<<endl;
		}	
};
int main()
{
	derived d;
	d.setvalue1(90);
	d.setvalue2(98);
	d.setvalue3(97);
	d.show();
	
}
