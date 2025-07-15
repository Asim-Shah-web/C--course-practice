#include<iostream>
using namespace std;
class Counter
{
	private:
		int count;
	public:
		Counter() : count(0)
		{
			
			cout<<"Constructor called......\n";
		}
		void inc_count()
		{
			count++;
		}
		int get_count()
		{
			return count;
		}
		void zero_count(int c)
		{
			count = c;
		}
			
};
int main()
{
Counter c1,c2,c3;
cout<<"The value of count for c1 = "<<c1.get_count()<<endl;
cout<<"The value of count for c2 = "<<c2.get_count()<<endl;
cout<<"The value of count for c3 = "<<c3.get_count()<<endl;
c1.inc_count();
c1.inc_count();
c2.inc_count();
c3.inc_count();
c3.inc_count();
c3.inc_count();
cout<<"The value of count for c1 = "<<c1.get_count()<<endl;
cout<<"The value of count for c2 = "<<c2.get_count()<<endl;
cout<<"The value of count for c3 = "<<c3.get_count()<<endl;
return 0;
}
