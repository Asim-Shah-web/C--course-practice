#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void setroll_no(int);
		void getroll_no(void);
};

void student::setroll_no(int n)
{
	roll_no = n ;
}

void student::getroll_no(void)
{
	cout<<"The Roll number of the student is: "<<roll_no<<endl;
}

class exam : public student
{
	protected:
		float maths,physics;
	public:
		void set_marks(float n, float m);
		void get_marks();
};

void exam::set_marks(float n, float m)
{
	maths = n;
	physics = m;
}

void exam::get_marks()
{
	cout<<"Marks in subject:"<<endl<<" Maths: "<<maths<<endl<<" Physics: "<<physics<<endl;
}


class result : public exam
{
	float percentage;
	public:
		void display()
		{
			getroll_no();
			get_marks();
			cout<<"The percentage of the student is: "<<(maths+physics)/2<<"%"<<endl;
		}
};
int main()
{
	result res;
	res.setroll_no(120);
	res.set_marks(90.9,93.4);
	res.display();
}
