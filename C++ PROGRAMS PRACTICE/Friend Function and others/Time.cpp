#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int , int , int);
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	void printTime() const;
		
};
Time::Time(int h = 0, int m = 0, int s = 0)
{
	hour = h;
	minute = m;
	second = s;
}
void Time::setTime(int h, int m, int s)
{
hour = h;
minute = m;
second = s;	
}
void Time::setHour(int h)
{
	hour = h;
}
void Time::setMinute(int m)
{
	minute = m;
}
void Time::setSecond(int s)
{
	second = s;
}
int Time::getHour() const
{
	return hour;
}
int Time::getMinute() const
{
	return minute;
}
int Time::getSecond() const
{
	return second;
}
void Time::printTime() const
{
	
	cout<<getHour()<<" : "<<getMinute()<<" : "<<getSecond();
}
int main()
{
	Time t1(11,52,46);
	t1.printTime();
	Time t2;
	cout<<"\nThe time of t2 object before setting its values\n";
	t2.printTime();
	t2.setTime(12,5,15);
	cout<<"\nThe time of t2 object after setting its values\n";
	t2.printTime();
	return 0;
}
