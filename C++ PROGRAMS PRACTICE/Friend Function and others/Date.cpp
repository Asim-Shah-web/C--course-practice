#include<iostream>
using namespace std;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date() : day(0),month(0),year(0)
		{
			
		}
		Date(int d = 1, int m = 1, int y = 2000)
		{
			day = d;
			month = m;
			year = y;
		}
		void print()
		{
			cout<<day<<"\\"<<month<<"\\"<<year<<endl;
		}
	
};
int main()
{
	Date d1(),d2(14,5,2024);
//	d1.print();
	d2.print();
	return 0;
}
