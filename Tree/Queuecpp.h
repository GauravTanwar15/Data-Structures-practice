#include <stdio.h>
#ifndef Queuecpp_h
#define Queuecpp_h
class Node //Node of a tree
{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};
class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;
public:
    Queue()
    {
        front=rear=-1;
        size=10;
        Q=new Node *[size];
    }
    Queue(int size)
    {
        front=rear=11;
        this->size=size;
        Q=new Node* [this->size];
    }

    void enqueue(Node* x);
    Node* dequeue();
    int isEmpty(){return front==rear;}
};

void Queue :: enqueue(Node *x)
{
    if(rear==size-1)
        printf("Queue is full\n");
    else
    {
        rear++;
        Q[rear]=x;
    }   
}

Node* Queue :: dequeue()
{
    Node* x=NULL;
    if(rear==front)
        printf("Queue is empty\n");
    else
    {
        x=Q[front+1];
        front++;
    }
    return x; 
}

#endif