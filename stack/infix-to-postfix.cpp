#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct node{
    char data;
    node *next;
}*top=NULL;

void push(char x)
{
    struct node *t;
    t=new node;
    if (t==NULL)
    cout<<"stack full"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    char x=-1;
    struct node *t;
    if(top==NULL)
    cout<<"stack empty"<<endl;

    else
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t; 
    }

    return x;
    
}
void Display()
{
    struct node *p;
       p=top;
    while(p)
    {
        cout<<p->data;
        p=p->next;
        cout<<" "<<endl;
    }
}

int isBalanced(char *exp)
{
 int i;
 
 for(i=0;exp[i]!='\0';i++)
 {
 if(exp[i]=='(')
 push(exp[i]);
 else if(exp[i]==')')
 {
 if(top==NULL)
 return 0;
 pop();
 }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}

int precedence(char x) // checking precendence
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;

    return 0;    
}

int Isoperand(char x) // checking for operand & operator
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

char * InfixtoPostfix(char *infix)
{
    int i=0,j=0;
    char *postfix;
    int len= strlen(infix);
    postfix= (char *)malloc((len+2)*sizeof(char));

    while(infix[i]!='\0')
    {
        if(Isoperand(infix[i]))
            postfix[i++]=infix[i++];
        else
        {
            if(precedence(infix[i])>precedence(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++]=pop();
            }
            
        }
        
    }
    while (top!=NULL) //checking stack not empty
    
        postfix[j++]=pop(); //pop out all values from stack & store inside postfix

    postfix[j]='\0';
    
    return postfix;


}
int main(){
    char  *infix= strdup("a+b*c-d/e");
    push('#');// so stack don't give empty stack warning
    
    char *postfix=InfixtoPostfix(infix);

    printf("%s ",postfix);

return 0;
}