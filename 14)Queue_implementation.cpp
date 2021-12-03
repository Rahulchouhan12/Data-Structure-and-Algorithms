//program for queue menu implementation
#include <iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
int data;
Node *link;
};

Node *Top = NULL;
Node *rear = NULL;



// enter elements in queue
void enqueue ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 // inserting the first node
 if( Top == NULL )
 {
  Top = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

// delete/remove element from queue
void dequeue ( )
{
 if( Top == NULL && rear == NULL) 
 cout<<"Queue is empty\n";
 else
 //only one node in queue.
 if( Top == rear)
 {
  free(Top);
  Top = rear = NULL;
 }
 else
 {
  Node *ptr = Top;
  Top = Top->link;
  free(ptr);
 }
}


void displayQueue()
{
 if (Top == NULL && rear == NULL)
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = Top;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}


int main()
{
 int choice, value;
 while(1)
 {
  cout<<"\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n";
  cout<<"Enter choice:";
  cout<<"\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: displayQueue();
          break;
  case 4: exit(0);
          break;
  }
 }

 return 0;
}
