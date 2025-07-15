#include<iostream>
#include<string>
using namespace std;

class Hello{
	private:
		int c;
	public:
		void setvalue(int ot)
		{
			c=ot+30;
		}
		void display()
		{
			cout<<"The resultant value is: "<<c<<endl;
		}
};
int main()
{
	Hello h1;
	h1.setvalue(20);
	h1.display();
}
