#include<bits/stdc++.h>
using namespace std;
class Linkedlist{
public:
    struct Node
    {
      int data;
      Node *next;
      Node(int val){
         data =val;
         next = NULL;
      }

    };
    Node *head;
    Node *tail;
    Linkedlist(){
      head=NULL;
      tail=NULL;
    }
    void Insert(int x)
    {
      Node *newnode = new Node(x);
      if(head==NULL)
      {
         head=newnode;
         tail=newnode;
         return;
      }
      tail->next=newnode;
      tail=tail->next;
    }
 void Printdata()
    {
      Node *temp=head;
      while(temp)
      {
         cout<<temp->data<<endl;
         temp=temp->next;
      }
    }
     void InsertAtBegin(int x){
        Node *newnode = new Node(x);
        newnode->next=head;  
        head = newnode;

    }
    void InsertAtEnd(int x){
        Node *newnode = new Node(x);
        tail->next=newnode;
         tail=tail->next;
    }
     void InsertAtPosition(int x,int pos){
      Node *newnode = new Node(x);
        Node *tem=head;
        Node *pre;
        while(pos--)
        {
         pre=tem;
         tem=tem->next;
        }
          pre->next=newnode;
        newnode->next=tem;

    }
}; 
int main()
{
  Linkedlist list;
  list.Insert(10);
  list.Insert(20);
  list.Insert(30);
  list.InsertAtEnd(60);
  list.InsertAtBegin(40);
  list.InsertAtPosition(100,2);
  list.Printdata();
   
   }
