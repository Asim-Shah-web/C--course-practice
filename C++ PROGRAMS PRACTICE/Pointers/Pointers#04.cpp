#include<iostream>
using namespace std;
int main()
{
	float f,*c;
	c=&f;
	void fc(float* );
	cout<<"Enter temperature in fahrenheit: ";
	cin>>f;
	fc(&f);
	cout<<"The temperature in celsius: "<<*c<<endl;
}
fc(float*x)
{
	*x=(*x-32)*5.0/9.0;
}
