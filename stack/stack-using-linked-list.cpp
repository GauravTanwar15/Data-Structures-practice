#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*top=NULL;

void push(int x)
{
    struct node *t;
    t=new node;
    if (t==NULL)
    cout<<"stack full"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    int x=-1;
    struct node *t;
    if(top==NULL)
    cout<<"stack empty"<<endl;

    else
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t; 
    }

    return x;
    
}
void Display()
{
    struct node *p;
       p=top;
    while(p)
    {
        cout<<p->data;
        p=p->next;
        cout<<" "<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    
    Display();

    cout<<"poped element is:"<<pop();

return 0;
}