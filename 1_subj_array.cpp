//WAP to Create an array of subjects you are stuiding in current semester
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string array[7];
    int n;
    cout<<"Enter Total Number of sujects:-";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter Name of Subjects in array at array["<<i<<"] :-";
        cin>>array[i];
        cout<<"\n";
    }
    cout<<"Arary of Subjects:-";
    for(int j=0;j<=n;j++)
    {
    	cout<<array[j]<<"  ";
	}
    return 0;
}

