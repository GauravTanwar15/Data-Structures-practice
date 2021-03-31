#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;// pointer of type struct
}*first = NULL;

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
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void RecursiveDisplay (struct node *p)// print linked list in reverse
{
    if(p!=NULL)
    {
        RecursiveDisplay(p->next);
        cout<<p->data<<" ";
        
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

int RecursiveCount(struct node *p)
{
    while (p!=NULL)
    {
        return RecursiveCount(p->next)+1;
    }
    
}

int sum(struct node *p)
{
    int sum = 0;
    while (p)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
    
}

int RecursiveSum(struct node *p)
{
    while (p)
    {
        return RecursiveSum(p->next)+p->data;
    }
    
}

int max(struct node *p)
{
    int m=INT32_MIN;
    while(p)
    {
        if(p->data>m)
        m=p->data;
        p=p->next;
    }
    return (m);
}

int RecursiveMax(struct node *p)
{
    int max=INT32_MIN;

    if(p==0)
        return max;

    else
        max=RecursiveMax(p->next);
        return max>p->data ?max:p->data;
    
    
}
/*
void Insert(int position, int x)
{
    node *t, *p;
    if(position==0)//inserting at the starting
    {
        t=new node;
        t->data=x;
        t->next=first;
        first=t;
    }

    else if(position>0)//inserting after given position
    {
        p=first;
    }
    for(int i=0;i<position-1 && p;i++)
    
        p=p->next;
    if(p)
    {
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}
*/
int main(){
    int A[]={10,20,30,40,50}; 
    create(A,5);
    cout<<"count = "<<count(first)<<endl;   
    cout<<"count = "<<RecursiveCount(first)<<endl;
    cout<<"sum of linked list is = "<<sum(first)<<endl;
    cout<<"sum of linked list is = "<<RecursiveSum(first)<<endl;
    cout<<"maximum element is ="<<max(first)<<endl;
    cout<<"maximum element is ="<<RecursiveMax(first)<<endl;
    display(first);
    RecursiveDisplay(first);

return 0;
};