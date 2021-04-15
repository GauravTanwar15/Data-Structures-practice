#ifndef Queue_h
#define Queue_h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;
public:
    Queue()
    {
        front=rear=-1;
        size=10;
        Q=new int [size];
    }
    Queue(int size)
    {
        front=rear=11;
        this->size=size;
        Q=new int [this->size];
    }

    void Enqueue(int x);
    int Dequeue();
    void Display();
};

void Queue :: Enqueue(int x)
{
    if(rear==size-1)
        cout<<"Queue id full";
    else
    {
        rear++;
        Q[rear]=x;
    }   
}

int Queue :: Dequeue()
{
    int x=-1;
    if(rear==front)
        cout<<"Queue is empty";
    else
    {
        x=Q[front+1];
        front++;
    }
    return x; 
}

void Queue :: Display()
{
    for(int i=front+1;i<=rear;i++)
    cout<<Q[i]<<" ";
    cout<<"\n";
}
int main(){
    Queue q(5);
    q.Enqueue(5);
    q.Enqueue(15);
    q.Enqueue(25);
    q.Display();
    cout<<"Deleted element is: "<<q.Dequeue();
    
return 0;
}
#endif