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

void Append( struct Array *arr, int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

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
int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        return i;
    }
    return -1;
};
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

};
//for improving Linear Search
int LinearTransposition(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
};
int LinearMovetoFront(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
};

int BinarySearch(struct Array arr, int key)
{
    int low=0,high=arr.length-1;;
    int mid;
    while (low<=high)
    {
        mid= (low+high)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if (key<=arr.A[mid])
        {
            high=mid-1;
        }
        else 
            low=mid+1;
    }
    
    return 0;
};

int RecursiveBinarySearch(int a[], int low, int high, int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
    }
    if(key==a[mid])
        return mid;
    else if(key<=a[mid])
        return RecursiveBinarySearch(a, low, mid-1, key);
    else
        return RecursiveBinarySearch(a, mid+1, high, key);
    return -1;
};

int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    //Append(&arr, 6);
    //Insert(&arr,2,10);
    //Delete(&arr, 4);
    //cout<<(LinearSearch(arr, 6));
    //cout<<(LinearTransposition(&arr, 2));
    //cout<<(LinearMovetoFront(&arr, 2));
    //Display(arr);
    //cout<<(BinarySearch(arr, 4));
    //cout<<(RecursiveBinarySearch(arr.A, 0, arr.length, 4));


return 0;
};








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

void Append( struct Array *arr, int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

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
int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        return i;
    }
    return -1;
};
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

};
//for improving Linear Search
int LinearTransposition(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
};
int LinearMovetoFront(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
};

int BinarySearch(struct Array arr, int key)
{
    int low=0,high=arr.length-1;;
    int mid;
    while (low<=high)
    {
        mid= (low+high)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if (key<=arr.A[mid])
        {
            high=mid-1;
        }
        else 
            low=mid+1;
    }
    
    return 0;
};

int RecursiveBinarySearch(int a[], int low, int high, int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
    }
    if(key==a[mid])
        return mid;
    else if(key<=a[mid])
        return RecursiveBinarySearch(a, low, mid-1, key);
    else
        return RecursiveBinarySearch(a, mid+1, high, key);
    return -1;
};

int main(){
    struct Array arr={{1,2,3,4,5},20,5};
    //Append(&arr, 6);
    //Insert(&arr,2,10);
    //Delete(&arr, 4);
    //cout<<(LinearSearch(arr, 6));
    //cout<<(LinearTransposition(&arr, 2));
    //cout<<(LinearMovetoFront(&arr, 2));
    //Display(arr);
    //cout<<(BinarySearch(arr, 4));
    //cout<<(RecursiveBinarySearch(arr.A, 0, arr.length, 4));


return 0;
};