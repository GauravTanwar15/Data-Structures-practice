#include <iostream>
using namespace std;
//          recursion uisng pascal's triangle
int ncr(int n, int r)
{
    if(r==0 || n==r)
    return 1;
    else
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int factorial(int n)
{
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}
//          function  time-O(n)
int nCr(int n, int r)
{
    int num, den;
    num=factorial(n);
    den=factorial(r)*factorial(n-r);
    return  num/den;
}

int main(){
    cout<<ncr(5,2)<<endl;
    printf("%d \n",nCr(5,2));//10

return 0;
};