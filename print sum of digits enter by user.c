#include<stdio.h>
 int main(){
     int digit;
     scanf("%d",&digit);//64

     int sum = 0;
     while(digit>0){
      sum += digit%10;
      digit = digit/10;
 }
 printf("%d",sum);
 return 0;
 }
