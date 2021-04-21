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
    Insert(H,2);
    Insert(H,5);
    Insert(H,8);
    Insert(H,9);

return 0;
};