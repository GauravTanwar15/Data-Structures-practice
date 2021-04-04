#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*head;
void create(int A[], int element)
{
    struct node *t, *last;
    head = new node;
    head->data=A[0];//first node
    head->next=head;//pointing to self if only one node. 
    last=head;

    for (int i = 1; i < element; i++)
    {
        t=new node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void Display(struct node *h)
{

    do
    {
        printf("%d ", h->data);
        h=h->next;
    } while (h!=head);
    
    cout<<endl;
}

void RDisplay(struct node *h)
{
    static int flag=0;

    if(h!=head || flag==0)
    
    {
        flag=1;
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag=0;
}
int Length(struct node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;
 
 }while(p!=head);
 return len;
}
void Insert(struct node *p, int index, int x)
{
    struct node *temp;
    int i;

    if(index<0 || index > Length(p))
        return;

    if(index==0)//before head node
    {
        temp=new node;
        temp->data=x;
        if(head==NULL)//if first node
        {
            head=temp;
            head->next=head;//pointing to it self
        }

        else 
        {
            while(p->next!=head)
                p=p->next;
            p->next=temp;
            temp->next=head;
            head=temp;
        }
    }    

    else 
    {
        for (int i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        temp=new node;
        temp->data=x;
        temp->next=p->next;
        p->next=temp;
        
    }

}

int Delete( struct node *p, int index)
{
    int x;
     struct node *q;

    if(index <0 || index >Length(head))
 return -1;

    if(index==1)
    {
        p=head;
        while(p->next!=head)
        p=p->next;
        x=head->data;
        if(head==p)
        {
            delete head;
            head=NULL;
        }
        else
        {
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else
    {
        for ( int i = 0; i < index-2; i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;  
    }
    return x;
        
}

int main(){
    int A[]= {10,20,30,40,50};
    create(A,5);
    //Display(head);
    //RDisplay(head);
    //Insert(head,0,0);
    //Display(head);
    //cout<<"After deleting:"<<Delete(head,1)<<endl;
   // Display(head);


return 0;
}