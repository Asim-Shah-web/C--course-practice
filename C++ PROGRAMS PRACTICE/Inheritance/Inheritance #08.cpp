#include<iostream>
using namespace std;
/*class A
{
	
};
class B : virtual public A                  The main thing to note here is that the data members and member functions of class "A" will
                                            be inherited twice in class "D" because class "B" and "C" are the parent classes of class "D"
											and they both are being derived from class "A".So when the class "D" will try to access the
											data member or member function of class "A" it will cause ambiguity for the compiler and the
										    compiler will throw an error. To solve this ambiguity we will make class "A" as a virtual base class.
										    To make a virtual base class "virtual" keyword is used.
                                            When one class is made virtual then only one copy of its data member and member function is passed 
											to the classes inheriting it. So in our example when we will make class "A" a virtual class then only one copy
										    of the data member and member function will be passed to the classes "B" and "C" which will be shared between all classes.
											This will help to solve the ambiguity.

{
	
}; 
class C : virtual public A
{
	
};
class D : public B,public C
{
	
};

int main()
{
}
*/
class stud
{
	protected:
		int roll;
	public:
		void setroll(int n)
		{
			roll=n;
		}
		void getroll()
		{
			cout<<"The Roll Number of the student is: "<<roll<<endl;
		}
};
class test : public virtual stud
{
	protected:
		float maths,physics;
	public:
		void setmarks(float n,float m)
		{
			maths=n;
			physics=m;
		}
		void getmarks()
		{
			cout<<"The marks of the student is: "
			<<endl<<"Maths :"<<maths<<endl<<"Physics :"<<physics<<endl;
		}
};
class sports : virtual public stud
{
		protected:
		    float score;
    	public:
		    void setscore(float sc)
		    {
		    	score=sc;
		    }
	    	void getscore()
	    	{
		    	cout<<"The score of the student is: "<<score<<endl;
	    	}
};
class result : public test, public sports
{ 
        private:
	        float total;
		public:
		    void display()
			{
			   total = maths+physics+score;
			   getroll();
			   getmarks();
			   getscore();
			   cout<<"The total final result is : "<<total<<endl;	
			}
};
int main()
{
	result res;
	res.setroll(45);
	res.setmarks(70.5,94.5);
	res.setscore(80.2);
	res.display();
}



























