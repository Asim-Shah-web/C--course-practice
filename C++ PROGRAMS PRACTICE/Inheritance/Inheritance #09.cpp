#include<iostream>
#include<math.h>
using namespace std;
class simplecalculator
{
    protected:
	    int a,b;
	public:
		void getdata()
		{
			cout<<"Enter your 1st Number : ";
			cin>>a;
			cout<<"Enter your 2nd Number : ";
			cin>>b;
		}
		void performoperation()
		{
			cout<<"The sum of a and b is : "<<a+b<<endl;
			cout<<"The difference of a and b is : "<<a-b<<endl;
			cout<<"The product of a and b is : "<<a*b<<endl;
			cout<<"The division of a by b is : "<<a/b<<endl;
			
		}
};

class scientificcalculator
{
    protected:
	    int a,b;
	public:
		void getdata()
		{
			cout<<"Enter your 1st Number : ";
			cin>>a;
			cout<<"Enter your 2nd Number : ";
			cin>>b;
		}
		void scientificperformoperation()
		{
			cout<<"The value of cos of a is : "<<cos(a)<<endl;
			cout<<"The value of sin of a is : "<<sin(a)<<endl;
			cout<<"The value of tan of a is : "<<tan(a)<<endl;
			cout<<"The value of exp of a is : "<<exp(a)<<endl;
			
		}
};

class hybridcalculator : public simplecalculator , public scientificcalculator
{
	public:
  	    void getdata()
  	    {
  	    	simplecalculator::getdata();
		}
};

int main()
{
	hybridcalculator hb;
	hb.getdata();
	hb.performoperation();
	hb.getdata();
	hb.scientificperformoperation();
}




