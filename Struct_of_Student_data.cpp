//Program for collecting student record using Structure- created by Rahul chouhan
#include<iostream>
#include<string.h>
using namespace std;
struct stud
{
	int roll;
	string name;
	int age;
};

int main()
{
    struct stud s1[6];
    for(int i=0;i<5;i++)
	{
        cout<<"=============== Record No:-"<<i+1<<"=================== \n";
        cout<<"Enter roll no:-";
        cin>>s1[i].roll;
        cout<<"Enter Name:-";
        cin>>s1[i].name;
        cout<<"Enter Age:-";
        cin>>s1[i].age;
    }
    cout<<"=====================================\n";
    cout<<"Student Data:-\n\n";
    
    for(int i=0;i<5;i++)
    {
        cout<<"["<<s1[i].roll<<", "<<s1[i].name<<", "<<s1[i].age<<"]\n";
    }
    return 0;
}
