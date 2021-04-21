#include <iostream>
using namespace std;

void Insert(int A[], int n)
{
    int i=n, temp;
    temp =A[i];

    while (i>1 && temp > A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }

    A[i]=temp;
}

int main(){
    int H[] = {0,2,5,8,9,10,7};

    int i;
    for ( i = 0; i <=7; i++)
    {
        Insert(H,i);
    }
     
    
    

return 0;
};