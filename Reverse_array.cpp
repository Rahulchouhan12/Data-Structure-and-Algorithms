//WAP to create 10 elements array and print it reverse
#include<iostream>
using namespace std;
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"Reverse array:-";
for(int i=9;i>=0;i--)
{
	cout<<arr[i]<<"  ";
}	
return 0;
}
