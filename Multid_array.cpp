 //Create a Multidimentail array and initialize with values and display in row and column Major order
#include<iostream>
using namespace std;
int main()
{
	int array[3][3][3]={{1,2,3,4,5,6,7,8,9},{10,20,30,40,50,60,70,80,90},{100,200,300,400,500,600,700,800,900}};
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			for(int k=0;k<=2;k++)
			{
				cout<<"Array at ["<<i<<"] ["<<j<<"] ["<<k<<"] :-"<<array[i][j][k]<<"\n";
			}
		}
	}
	return 0;
	
}


