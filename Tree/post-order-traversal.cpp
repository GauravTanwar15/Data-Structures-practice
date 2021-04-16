#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "stack.h"
struct Node *root=NULL;
void Treecreate()
{
 struct Node *p,*t;
 int x;
 struct Queue q;
 create(&q,100);
 
 printf("Eneter root value ");
 scanf("%d",&x);
 root=(struct Node *)malloc(sizeof(struct Node));
 root->data=x;
 root->lchild=root->rchild=NULL;
 enqueue(&q,root);
 
 while(!isEmpty(q))
 {
 p=dequeue(&q);
 printf("eneter left child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 enqueue(&q,t);
 }
 printf("eneter right child of %d ",p->data);
 scanf("%d",&x); if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 enqueue(&q,t);
 }
 }
}

void Postorder(Node *t)
{
    struct Stack st;
    long int  temp;

    while (t || isemptyStack(st))
    {
        if(t)
        {
            push(&st,t);
            t=t->lchild;
        }
        else
        {
            temp=pop(&st);
            if(temp>0)
            {
                push(&st, -temp);//converting adress to -ve for printing
                t=((Node*)temp)->rchild;//type casting
            }
            else
            {
                printf("%d ",((Node *)temp)->data);
                t=NULL;
            }
            
        }
        
    }
    

}
int main()
{
 Treecreate();

 
 return 0;
};
