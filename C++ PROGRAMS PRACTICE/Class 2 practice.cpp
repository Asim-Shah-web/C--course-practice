#include<iostream>
#include<string>
using namespace std;
class emp
{
	private:
		string name;
		float bpay,gpay,ma,h_rent;
		public:
			
			void input();
			void calc();
			void display()
			{
				cout<<"Name of the employee is: "<<name<<endl;
				cout<<"Basic pay: "<<bpay<<endl;
				cout<<"House Rent: "<<h_rent<<endl;
				cout<<"Medical Allowance: "<<ma<<endl;
				cout<<"Net Pay: "<<gpay<<endl;
			}
		
};
void emp::input(){
	cout<<"Enter your name: "<<endl;getline(cin,name);
	cout<<"Enter your basic pay: "<<endl;cin>>bpay;	
}
void emp::calc(){
	h_rent=bpay*60/100;
	ma=bpay*20/100;
	gpay=h_rent+ma+bpay;
}
int main()
{
	emp e1;
	e1.input();
	e1.calc();
	e1.display();
}
