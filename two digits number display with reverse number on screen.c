#include<stdio.h>
//input two digits number display with reverse number on screen
int main(){
    int digit;
    scanf("%d",&digit); //I/p:32

    int firstnum = digit/10;
    int lastnum = digit%10;

    printf("%d%d",lastnum,firstnum);
    return 0;
}
