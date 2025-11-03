#include<stdio.h>
//find the Largest among Three Variables using Nested if
int main(){
 int num1,num2,num3;
  printf("Enter the three number:");
  scanf("%d%d%d",&num1,&num2,&num3);
  if (num1 >= num2){
    if(num1 >= num3){
        printf("The Largest number is : %d",num1);
    }else {
        printf("The Largest number is : %d",num3);
  }
  }else {
    if(num2 >= num3){
     printf("The Largest number is : %d",num2);
    }else {
     printf("The Largest number is : %d",num3);
     }
  }
  return 0;
}
