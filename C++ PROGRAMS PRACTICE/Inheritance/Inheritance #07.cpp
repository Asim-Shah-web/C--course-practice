#include<iostream>
using namespace std;
class B
{
    public:
    	void say()
    	{
    		cout<<"HELLO WORLD!!!!"<<endl;
		}
};
class D : public B
{
	public:
		void say()
    	{
           cout<<"Kaisey hoo!!!"<<endl;
	    }
};
		/*The main thing to note here is that both "B" and "D" classes have the same function "say",
       So if the class "D" will call the function "say" it will override
		the base class "say" method because compiler by default run the method which is already written in 
		its own body. But if the function "say" was not present in the 
		class "D" then the compiler will run the method of the class "B".*/

int main()
{
	B b;
	b.say();
	
	D d;
	d.say();
}

