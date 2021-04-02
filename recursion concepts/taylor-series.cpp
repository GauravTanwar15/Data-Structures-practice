#include <iostream>
using namespace std;
//          Loop-iteration
double taylor_fun(int n , int x)
{
    double s=1;
    int i= 1;
    double num=1;
    double den=1;
    for ( i = 1; i <=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

            //Recursive function
double taylor(int x, int n)
{
    static double s;
    if(n==0)
    return s;
    s=1+x*s/n;
    return taylor(x,n-1);
}
int main(){
    cout<<taylor_fun(1,10)<<endl;
    cout<<taylor(1,10);
    

return 0;
};

#include <iostream>
using namespace std;
//          Loop-iteration
double taylor_fun(int n , int x)
{
    double s=1;
    int i= 1;
    double num=1;
    double den=1;
    for ( i = 1; i <=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

            //Recursive function
double taylor(int x, int n)
{
    static double s;
    if(n==0)
    return s;
    s=1+x*s/n;
    return taylor(x,n-1);
}
int main(){
    cout<<taylor_fun(1,10)<<endl;
    cout<<taylor(1,10);
    

return 0;
};


