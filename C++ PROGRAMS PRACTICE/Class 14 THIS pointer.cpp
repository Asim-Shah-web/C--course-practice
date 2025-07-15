#include<iostream>
#include<string>
using namespace std;

class thispointer{
	private:
		int a;
	public:
	//	thispointer& setdata(int a)
		void setdata(int a)
		{
			this->a=a;
		}
		void getdata()
		{
			cout<<"The value of A is: "<<this->a<<endl;
			//cout<<"The value of A is: "<<a<<endl;
		}
};
int main()
{
	thispointer p;
	p.setdata(6);
	p.getdata();
//	p.setdata(6).getdata();
}
