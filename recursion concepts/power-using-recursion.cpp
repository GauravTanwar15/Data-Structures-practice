#include <iostream>
using namespace std;

int power_1(int m, int n)
{
    if(n==0)
        return 1;
    else
        return power_1(m,n-1)*m;
}
int power_2(int m , int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return power_2(m*m,n/2);
    else
        return m*power_2(m*m,(n-1)/2);
    
}
int main(){
int m=2,n=9;
power_1(m,n);
cout<<power_1(m,n)<<endl;
power_2(m,n);
cout<<power_2(m,n);
return 0;
}