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

struct node * search(struct node *p, int key)// return type is pointer to node coz we r returning p. 
{
   struct node *q;//previous node
    while (p!=0)
    {
        if(key==p->data)
       {
        q->next=p->next;//moving q behind p
        p->next=first;
        first=p;
        return p;
       } 
    q=p;
    p=p->next; 
    }
    return NULL;  
}


void Insert(struct node *p, int position, int x)
{
   struct  node *t;
    if(position < 0 || position >count(p))//checking for negative position
        return;
        t=new node;
        t->data=x;
    if(position==0)//inserting at the starting
     {  
          t->next=first;
        first=t;
    }

    else//inserting after given position
    {
    for(int i=0;i<position-1;i++)
        p=p->next;

    t->next=p->next;
    p->next=t;
    }
}

void InsertatLast(struct node *p,  int x)
{
    struct node * temp;
    struct node *new_node=new node;

    new_node->data=x;
    new_node->next=NULL;

    if(first==NULL)//if inserting node is the first node only.
    {
        first=new_node;
    }

    else// inserting at end always
    {   temp=first;
      while(temp->next!=0)
      {
          temp=temp->next;
      } 
            temp->next=new_node;
            temp=new_node;
      
    }
}

int IsSorted(struct node *p)
{
    int x=INT32_MIN;
    while (p!=0)
    {
        if(p->data<x)
        return 0;
        x=p->data;
        p=p->next;
    }
        return 1;
    
}

int Delete(struct node *p, int index)
{
    struct node *q;
    int x=-1;

    if(index <1 || index > count(p))
    return -1;

    if(index==1)//deleting from first index
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }

    else
    {
        for(int i =0;i<index;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

void SortedInsert(struct node *p, int x)
{
    struct node *q=NULL;
    struct node *t;

    t=new node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    first=t;

    else 
    {
        while (p && p->data<x)
        {
            p=q;
            p=p->next;
        }
        if(p==first)
        {
        t->next=first; 
        first=t;
        }

        else
        {
        t->next=q->next;
        q->next=t;

        }
    }

}


int main(){
    //struct node *temp;
    //int A[]={10,20,30,40,50}; 
    //create(A,5);
    //cout<<"count = "<<count(first)<<endl;   
    //cout<<"count = "<<RecursiveCount(first)<<endl;
    //cout<<"sum of linked list is = "<<sum(first)<<endl;
    //cout<<"sum of linked list is = "<<RecursiveSum(first)<<endl;
    //cout<<"maximum element is ="<<max(first)<<endl;
    //cout<<"maximum element is ="<<RecursiveMax(first)<<endl;
    //display(first);
   //RecursiveDisplay(first);
   //temp=search(first, 30);
   //cout<<endl<<temp->data;
   //Insert(first,0,15);
   //Insert(first,0,30);
   //Insert(first,0,45);
   //Insert(first,1,60);
  cout<<endl;
   // IsSorted(first);
   //Delete(first, 3);
  //SortedInsert(first, 5); 
  InsertatLast(first, 6);
  InsertatLast(first, 7);
  InsertatLast(first, 8);
  InsertatLast(first, 9);
 display(first);
   
    
return 0;
};