#include<stdio.h>
//input three digits numbers and display the square of first and last numbers.
int main(){
    int digit;
    scanf("%d",&digit); //I/p:358

    int firstnum = digit/100;
    int lastnum = digit % 10;

    int firstsquare = firstnum * firstnum;
    int lastsquare = lastnum * lastnum;

    printf("First number : %d\nLast number : %d\n",firstsquare,lastsquare);
    return 0;
}
