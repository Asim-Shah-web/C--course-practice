#include<iostream>
using namespace std;
class base1
{
    public:
	  void greet()
	  {
	  	cout<<"How are you????"<<endl;
	  }
};

class base2
{
    public:
	  void greet()
	  {
	  	cout<<"Ap kaisey hoo????"<<endl;
	  }
};

class derived : public base1, public base2
{
    public:
    	void greet()
    	{
    		base1::greet();
		}
};

int main()
{
	derived der;
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();
    der.greet();
}
