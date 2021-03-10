#include <iostream>
using namespace std;
/* structure
struct cards
{
    int face;
    int shape;
    int color;
};

int main(){
struct cards deck[2] ={{1,0,0},{2,0,0}};
printf("%d %d %d",deck[0].face,deck[0].shape,deck[0].color);//1 0 0
*/
struct rectangle
{
    int length,breadth;
};

int main (){
    struct rectangle r={10,5};
   struct rectangle *p;
   p->length=20;
   printf("%d",r.length);
return 0;
};