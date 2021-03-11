#include <iostream>
using namespace std;
//          recursion-1 time-O(2^n)
int fib1(int n)
{
    if(n<=1)
    return n;
    return fib1(n-2)+fib1(n-1);
}
//          loop-iteration  time-O(n)
int fib2(int n)
{   int t0=1,t1=1,s,i;
    if(n<=1)
    return n;
    for(i=2;i<=n;i++)
    {
    s=t0+t1;
    t0=t1;
    t1=s;
    }
    return s;
}
//          recursion   time-O(n)
int f[10];//array storing result, to reduce system calls
int fib3(int n)
{
    if(n<=1)
    {
        f[n]={n};
    return n;
    }
    
    else
        if(f[n-2]==-1)
        f[n-2]=fib3(n-2);
        if(f[n-1]==-1)
        f[n-1]=fib3(n-1);
    return fib3(n-2)+fib3(n-1);
}
int main(){
    int n=6;
    cout<<fib1(10)<<endl;//55
    cout<<fib2(5)<<endl;//8
    cout<<fib3(n)<<endl;
return 0;
}