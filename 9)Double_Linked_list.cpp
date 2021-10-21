//Program for creating and displaying Double lisnked list- 
//Created by Rahul Chouhan
#include<iostream>
#include<malloc.h>
using namespace std;
struct Double
{
 int data;
 struct Double *Lptr;
 struct Double *Rptr;
}*L,*R;
struct Double *create(int val);
struct Double *create(int val)
{
 struct Double *new2;
 new2 = new Double;
 new2->data=val;
 return(new2);
}
int main()
{
 struct Double *d1,*d2,*d3,*d4;
 d1 = create(67);
 L=d1;
 d1->Lptr=NULL;
 d2 = create(23);
 d2->Lptr=d1;
 d1->Rptr=d2;
 d3= create(55);
 d3->Lptr=d2;
 d2->Rptr=d3;
 d4 = create(90);
 d4->Lptr=d3;
 d3->Rptr=d4;
 d4->Rptr=NULL;
 R=d4;
 cout<<"\nDouble linked list is :"<<endl;
 cout<<"\nL<-->";
 struct Double *temp=L;
 while(temp!=NULL)
 {
   cout<<temp->data<<"->";
   temp = temp->Rptr;
 }
 cout<<"NULL";
return 0;
}
