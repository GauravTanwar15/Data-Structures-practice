#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class stack{

private:
    node *top;
public:
    stack()//default constructor
    {
        top=NULL;
    }

    void push(int x);
    int pop();
    void Display();
};

void stack ::push(int x)
{
    node *t=new node;
    if(t==NULL)
        cout<<"stack is full"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int stack ::pop()
{
    int x=-1;
    if(top==NULL)
        cout<<"stack is empty"<<endl;
    else
    {
        x=top->data;
        node *t=top;
        top=top->next;
        delete t;
    }
    return x;
}

void stack ::Display()
{   node *p=top;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    //stk.push(50);
    stk.Display();
    
    cout<<"poped element is:"<<stk.pop();
    

return 0;
}