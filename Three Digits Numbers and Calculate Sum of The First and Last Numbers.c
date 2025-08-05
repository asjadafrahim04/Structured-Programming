#include<stdio.h>
//  three digits numbers and calculate sum of the first and last numbers
int main(){
    int digit;
    scanf("%d",&digit); //I/p:358

    int firstnumber = digit/100;
    int lastnumber = digit % 10;

    int sum = firstnumber + lastnumber;
    printf("%d",sum);
return 0;
}
