//Program for collecting student record using arrray - created by Rahul chouhan
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	int Roll_No[5], age[5];
	string name[5];
	public:
	void input()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"===============Record No:-"<<i+1<<"==================\n\n";
			cout<<"Enter Roll No:-";
			cin>>Roll_No[i];
			cout<<"Enter Name:-";
			cin>>name[i];
			cout<<"Enter Age:-";
			cin>>age[i];
		}
	}
	void output()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"["<<Roll_No[i]<<", "<<name[i]<<", "<<age[i]<<"]\n"; 
		}
	}
};

int main()
{
	A Obj;
	Obj.input();
	cout<<"\n==================== Student Data ====================\n\n";
	Obj.output();
	return 0;
}
