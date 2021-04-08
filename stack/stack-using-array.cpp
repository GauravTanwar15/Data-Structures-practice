#include <iostream>
using namespace std;
struct stack

{
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    printf("enter size: ");
    scanf("%d",&st->size);
    st->top=-1;
    st->S= new int[st->size]; 
    
}
void Display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    cout<<st.S[i]<<" ";
    cout<<"\n";
}

void push(struct stack *st, int x)
{
    if(st->top==st->size-1)
    cout<<"stack overflow"<<"\n";
    else
    {
        st->top++;
        st->S[st->top]=x;
    } 
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    cout<<"stack empty"<<endl;
    else
    {
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st, int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
    cout<<"Invalid";
    else
    {
        x=st.S[st.top-pos+1];   
    }

    return x;
    
}

int stacktop(stack st)
{
    if(st.top==-1)
        return -1;
    else
        return st.S[st.top];   
}
int Isempty(stack st)
{
    if(st.top==-1)
        return 1;
    else
        return 0; 
}
int Isfull(stack st)
{
    if(st.top==st.size-1)
        return 1;
    else
        return 0;   
}
int main(){
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    //Display(st);
    //pop(&st);
    Display(st);
    cout<<peek(st,2)<<"\n";
    


return 0;
}