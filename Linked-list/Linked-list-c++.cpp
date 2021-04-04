#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class LinkedList
{
private:
    node *first;
public:
LinkedList()
{
    first=NULL;
}
LinkedList(int A[], int n);
~LinkedList();
void Display();
void Insert(int index, int x);
int Delete(int index);
int Length();
};

LinkedList::LinkedList(int A[], int n)//creating the linked list
{
    node *last, *temp;
    int i=0;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for ( i = 1; i < n; i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
    
LinkedList::~LinkedList()
{
    node *p=first;
    while(first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

void LinkedList::Display()//Displaying the Linked List
{
    node *p=first;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int LinkedList::Length()//Length of Linked List
{
    node *p=first;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
        
    }
    return len;
}

void LinkedList::Insert(int index, int n)//Inserting Node in Linked List
{   
    node *temp,*p=first; 

    if(index < 0 || index > Length())
        return ;
    temp=new node;
    temp->data=n;
    temp->next=NULL;

    if(index==0)
     {
         temp->next=first;
         first=temp;
     }
     else
     {
         for (int i = 0; i < index-1; i++)
         
             p=p->next;
        temp->next=p->next;
        p->next=temp;
         
         
     }
}

int LinkedList::Delete(int index)//Deleting Node from Linked List
{
    node *p,*q=NULL;
    int x=-1;

    if(index < 1 || index > Length())
        return -1;
    if(index ==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }

else
{
    p=first;
    for (int i = 0; i < index-1; i++)
    {
        q=p;//q is tail pointer
        p=p->next;
    }

    q->next=p->next;
    x=p->data;
    delete p;
}
    return x;

}

int main(){
    int A[]= {1,2,3,4,5};
    LinkedList l(A,5);
    //l.Insert(3,10);
    //l.Delete(4);
    //cout<<l.Length()<<" ";
    l.Display();
    

return 0;
};