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
void IPreorder(struct Node *p)
{
 struct Stack st;
 create(&st,100);
 
 while(p || !Isempty(st))
 {
 if(p)
 {
 printf("%d ",p->data);
 push(&st,p);
 p=p->lchild;
 }
 else
 {
 p=pop(&st);
 p=p->rchild;
 }
 }
}
void IInorder(struct Node *p)
{
 struct Stack st;
 Stackcreate(&st,100);
 
 while(p || Isempty(st))
 {
 if(p)
 {
 push(&st,p);
 p=p->lchild;
 }
 else
 {
 p=pop(&st);
 printf("%d ",p->data);
 p=p->rchild;
 }
 }
}
int main(){
 Treecreate();
 
 IPreOrder(root); 
 IInorder(root);
 return 0;
}