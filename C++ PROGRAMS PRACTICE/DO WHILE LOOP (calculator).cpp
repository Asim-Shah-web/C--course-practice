#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	char op,ask;
	float res;
	do
	{
		cout<<"Enter 1st number "<<endl;
		cin>>n1;
		cout<<"Enter 2nd number "<<endl;
		cin>>n2;
		cout<<"Enter 3rd number \n ";
		cin>>n3;
		cout<<"Please Enter Operator "<<endl;
		cin>>op;
		switch (op)
		{
			case '+':
				res=n1+n2+n3;
				cout<<"result= "<<res<<endl;
				break;
				case '-':
					res=n1-n2-n3;
					cout<<"resul = "<<res<<endl;
					break;
					case '*':
						res=n1*n2*n3;
						cout<<"result = "<<res<<endl;
						break;
						case '/':
							res=n1/n2/n3;
							cout<<"result= "<<res<<endl;
							break;
							default:
								cout<<"wrong operator\nEnter correct operator"<<endl;
							}
			cout<<"Do you want to perform another operation?\n press y for yes or n for No"<<endl;
			cin>>ask;
	}
	
 while(ask=='y');
cout<<"ok"<<endl;

}
