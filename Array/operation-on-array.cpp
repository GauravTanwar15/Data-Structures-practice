#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<endl<<"elements of array "<<endl;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d\n",arr.A[i]);
    }   
};
//          Operations on Array
//          1)Get()
int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
};
//          2)Set()
int Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
    return arr->A[index]=x;
    
};
//          3)Maximum()
int Max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for ( i = 1; i < arr.length; i++)
    {
        if (arr.A[i]>max);
        
            max=arr.A[i];
    }
    return max;
};
//          4)Minimum()
int Min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for ( i = 1; i < arr.length; i++)
    {
        if (arr.A[i]<min)
        
            min=arr.A[i];
    }
    return min;
};
//          5)Sum()
int Sum(struct Array arr)
{
    int sum=0;
    int i;
    for ( i = 0; i < arr.length; i++)
    
        sum+=arr.A[i];
    
    return sum;
    
};
//          6)Average()
float Average(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
};

int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    //Display(arr);
    //cout<<Get(arr, 2);
    //cout<<Set(&arr, 2, 6);
    //Display(arr);
    //cout<<Max(arr);
    //cout<<Min(arr);
    //cout<<Sum(arr);
    //cout<<Average(arr);
return 0;
}





#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<endl<<"elements of array "<<endl;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d\n",arr.A[i]);
    }   
};
//          Operations on Array
//          1)Get()
int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
};
//          2)Set()
int Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
    return arr->A[index]=x;
    
};
//          3)Maximum()
int Max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for ( i = 1; i < arr.length; i++)
    {
        if (arr.A[i]>max);
        
            max=arr.A[i];
    }
    return max;
};
//          4)Minimum()
int Min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for ( i = 1; i < arr.length; i++)
    {
        if (arr.A[i]<min)
        
            min=arr.A[i];
    }
    return min;
};
//          5)Sum()
int Sum(struct Array arr)
{
    int sum=0;
    int i;
    for ( i = 0; i < arr.length; i++)
    
        sum+=arr.A[i];
    
    return sum;
    
};
//          6)Average()
float Average(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
};

int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    //Display(arr);
    //cout<<Get(arr, 2);
    //cout<<Set(&arr, 2, 6);
    //Display(arr);
    //cout<<Max(arr);
    //cout<<Min(arr);
    //cout<<Sum(arr);
    //cout<<Average(arr);
return 0;
}