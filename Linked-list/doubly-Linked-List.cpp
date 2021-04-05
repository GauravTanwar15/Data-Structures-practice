#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*first;
void create(int A[], int element)
{
    struct node *t, *last;
    first = new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for (int i = 1; i < element; i++)
    {
        t=new node;
        t->prev=NULL;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display (struct node *p)
{
    while (p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    
}
int count(struct node *p)
{
    int count=0;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
    
}

void Insert(struct node *p, int index, int x)
{
    struct node *t;
    int i=0;

    if(index <0 || index > count(p))
        return;
    if(index==0)
    {
        t=new node;
        t->prev=NULL;
        t->data=x;
        t->next=first;
        first->prev=t;
        first=t;
    }

    else
    {
        for ( i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next!=0)//checking if there is next node or not.
        {
            p->next=t->next;
            p->next=t; 
        }
        
    }
}
int Delete(struct node *p, int index)
{
    int x=-1,i;
    if(index<1 || index >count(p))
        return -1;
    if(index==1)
    {
        first=first->next;
        if(first!=NULL)
        first->prev=NULL;
        x=p->data;
        delete p;
    }
    else
    {
        for ( i = 0; i < index-1; i++)
        {
            p=p->next;
        }

        p->prev->next=p->next;
        if(p->next!=NULL)
            p->next->prev=p->next;

        x=p->data;
        delete p;
    }  

    return x; 
        
}

void Reverse(struct node *p)
{
    struct node *temp;

    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
            first=p;
        
    }
}
int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    //display(first);
    //cout<<endl;
    //Insert(first,0,5);
    //cout<<"deleted element is: "<<Delete(first,1)<<endl;
    //cout<<"update linked list"<<endl;
    Reverse(first);
    display(first);
return 0;
}