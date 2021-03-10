#include <iostream>
using namespace std;
int sum(int n )
{
    if(n==0)
    
        return 0;
    else
        return sum(n-1)+n;
}
int main(){
    int n=5;
    sum(n);
    printf("%d ",sum(n));//15

return 0;
}