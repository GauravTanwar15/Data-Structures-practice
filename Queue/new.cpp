#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*front=NULL,*rear=NULL;

void Enqueue(int x)
{
    struct node *t;
    t=new node;

    if (t==NULL)
    {
        cout<<"Queue is full";
    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)//Checking if it is first element
        front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }   
    }   
}

int Dequeue()
{
    int x=-1;
    struct node *t;
    if(front==rear)
        cout<<"Queue is empty";
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        delete t;
    }
        return x;   
}


void Display()
{
    struct node *p=front;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
        cout<<"\n";
    }
}

int main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Display();
    cout<<"deleted element is: "<<Dequeue();
    Display();
return 0;
};