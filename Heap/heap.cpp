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
    int H[] = {0,10,20,30,25,5,40,35};
    //40,25,35,10,5,20,30
    int i;
    for ( i = 2; i <=7; i++)
        Insert(H,i);

    for ( i = 1; i <=7; i++)
    {
        cout<<H[i]<<" ";
    }
        
    
     
    
    

return 0;
};