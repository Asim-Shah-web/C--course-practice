#include<iostream>
using namespace std;

class complex
{
	int real,imaginary;
	public:
		void getdata()
		{
			cout<<"The value of real part is: "<<real<<endl;
			cout<<"The value of imaginary part is: "<<imaginary<<endl;
		}
		void setdata(int a, int b)
		{
			real=a;
			imaginary=b;
		}
};

int main()
{
complex *ppt = new complex;
(*ppt).setdata(41,54);
(*ppt).getdata(); 	
complex *arr = new complex[4];
arr->setdata(70,90);
arr->getdata();
arr->setdata(88,89);
arr->getdata();
}
