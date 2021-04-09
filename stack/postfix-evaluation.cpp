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

int evaluation(char *postfix)
{
    int i=0;
    int x1,x2,result;

    for ( i = 0; postfix[i]!='\0'; i++)
    {
        if (Isoperand(postfix[i]))
        {
            /* code */
        }
        
    }
    
}

int main(){
    ;
    
    Display();

    cout<<"poped element is:"<<pop();

return 0;
}