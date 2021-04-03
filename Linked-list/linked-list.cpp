#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;// pointer of type struct
}*first = NULL,*second = NULL, *third = NULL;

void createA(int A[], int element)
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

void createB(int B[], int element)
{
    struct node *t, *last;
    second = new node;
    second->data=B[0];
    second->next=NULL;
    last=second;

    for (int i = 1; i < element; i++)
    {
        t=new node;
        t->data=B[i];
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

void duplicate(struct node *p)
{
    struct node *q=first->next;

    while(q!=0)
    {
        if(p->data!= q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
        }     q=p->next;
    }
}

void reverse_element(struct node *p)
{
    int *B=new int[7], i=0;
    struct node *q=p;
    while(q!=0)
    {
        B[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=0)
    {
        q->data=B[i];
        q=q->next;
        i--;
    }
    
}

void reverse_link(struct node *p)
{
    struct node *q=NULL;//sliding pointer 1
    struct node *r=NULL;//sliding pointer 2

    while(p!=NULL)
    {
        r=q;//moving r
        q=p;//moving q
        p=p->next;//moving p
        q->next=r;//reversing
    }
    first=q;//making last node as first
}

void recursive_reverse(struct node * q, struct node * p)
{
    if(p!=NULL)
    {
        recursive_reverse(p, p->next);
        p->next=q;
    }
    else
    first=q;
}

void concat(struct node *p, struct node *q)
{
    third=p;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    //deleting pointer second after concatinating
}

void merge(struct node *p, struct node *q)
{
    struct node *last;

    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }

    else
    {
        third=last=q;
        q=q->next;
        last->next=NULL;
    }

    while(p!=NULL && q!=NULL)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    if(p!=NULL)
        last->next=p;

    else
        last->next=q;

}
int main(){
    //struct node *temp;
    int A[]={10,20,30,40,50}; 
    createA(A,5);
    int B[]={60,70,80,90,100}; 
    createB(B,5);
   // display(first);
    //cout<<endl;
    //display(second);
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
   // IsSorted(first);
   //Delete(first, 3);
  //SortedInsert(first, 5); 
  //InsertatLast(first, 6);
  //InsertatLast(first, 7);
  //InsertatLast(first, 8);
  //InsertatLast(first, 9);
  //duplicate(first);
  //reverse_element(first);
  //reverse_link(first);
  // recursive_reverse(NULL,first);
 //cout<<endl;
 //cout<<"Linkedlist after concatinating:"<<endl;
 //concat(first,second);
 merge(first,second);
 cout<<"Linkedlist after merging:"<<endl;
 display(third);
   
    
return 0;
};