#include<iostream>
using namespace std;
class base
{
    protected:
        int a;
	private:
	    int b;	
};
class derived : protected base
{
	public:
		derived()
		{
			cout<<a;
		}
	
};
int main()
{
	base b;
	derived d;
//	cout<<d.a;      this will not work since a is protected in both base as well as in derived cases
}
