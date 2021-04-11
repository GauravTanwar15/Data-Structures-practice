#include <iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q= new int [q->size];
}

void Enqueue(struct Queue *q, int x)
{
    if(q->rear==q->size-1)
        cout<<"queue is full";
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
    
}

int Dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
        cout<<"queue is empty";
    else
    {
        q->front++;
        x=q->Q[q->front];
        
    }
        return x;
}

void Display(struct Queue q)
{
    for (int i=q.front+1;i <= q.rear; i++)
    {
        printf("%d ",q.Q[i]);
        cout<<"\n";
    }
    
}
int main(){
    struct Queue q;
    create(&q,5);
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
  
    Display(q);
    cout<<"Deleted element is: "<<Dequeue(&q);

    
    

return 0;
};