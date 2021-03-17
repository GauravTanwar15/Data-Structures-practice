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
/*
void Append( struct Array *arr, int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}
*/
void Insert(struct Array *arr, int index, int x)
{
    if(index>0 && index <= arr->length)
    {
    for (int i = arr->length; i > index; i--)
        {
        arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }  
};
int Delete(struct Array *arr, int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return -1;
};
int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    //Append(&arr, 6);
    //Insert(&arr,2,10);
    Delete(&arr, 4);
    Display(arr);


return 0;
}