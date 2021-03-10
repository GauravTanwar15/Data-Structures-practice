#include <iostream>
using namespace std;
//      1) Tail recursion
/*
void recursion(int n)
{
    if(n>0)
    {
        printf("%d" " ",n);//5 4 3 2 1
        recursion(n-1);//at returning time it doesn't need to perform anything
    }
}

//      2) Head recursion

void recursion(int n)
{
    if(n>0)
    {
        recursion(n-1);//No statement, no operation before function call
        printf("%d" " ",n);//5 4 3 2 1
        
    }
}

//          3)Tree recursion-if it is calling itself more than once.
void recursion(int n)
{
    if(n>0)
    {
        printf("%d" " ",n);//3 2 1 1 2 1 1 
        recursion(n-1);
        recursion(n-1);
        
    }
}
int main(){
    int n=3;
    recursion(n);
//          4)Indirect recursion-A calls B nad B again calls A.
void recursion_B(int n);
void recursion_A(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        recursion_B(n-1);      
    }
}
void recursion_B(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        recursion_A(n/2);
    }
}
int main(){
    int n=20;
    recursion_A(n);
//output- 20 10 9 8 4 3 1
*/
//          5)Nested recusion-it will pass parameter as a recursive call.
int recursion(int n)
{
    if(n>100)
    
        return n-10;
    else 
        return recursion(recursion(n+11));
    
}
int main(){
    int n=95;
    printf("%d ",recursion(n));//91


return 0;
}