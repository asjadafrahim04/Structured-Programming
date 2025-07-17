#include<stdio.h>
int main (){
    // Post increment and decrement
   int i = 50, x;
   x = 10+ i++;
   printf("Post increment : %d\n",x);
   x = 10 + i--;
   printf("Post decrement : %d\n",x);

    // Pre increment and decrement
    int j = 25, y;
   y = 10+ ++j;
   printf("Pre increment : %d\n",y);
   y = 10 + --j;
   printf("Pre decrement : %d\n",y);
return 0;
}
