#include <iostream>
using namespace std;
//        example-1 (call and return)
/* 
void recursion(int n)
{
    if(n>0)
    {
        printf("%d" " ",n);// 3 2 1 //calling phase
        recursion(n-1);//returning phase
    }

}
int main(){
    int a=3;
    recursion(3);

//        example-2(return and call)

void recursion(int n)
{
    if(n>0)
    {
        recursion(n-1); 
        printf("%d" " ",n);//1 2 3 
        
    }

}
int main(){
    int a=3;
    recursion(3);
*/
//          example-3(static variable in recursion)
int recursion(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
       return recursion(n-1)+x; 
    }
    return 0;

}
int main(){
    int a=3;
   printf("%d", recursion(a));

return 0;
};