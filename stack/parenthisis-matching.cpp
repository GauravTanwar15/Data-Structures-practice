#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct node{
    char data;
    node *next;
}*top=NULL;

void push(char x)
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

char pop()
{
    char x=-1;
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

int IsBalanaced(char *exp)
{
   
    for (int i = 0; exp[i]!='\0'; i++) //accessing through string
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
    
}

int main(){
    char *exp=strdup("((a+b)*(c-d))");
    printf("%d ",IsBalanaced(exp));

return 0;
}