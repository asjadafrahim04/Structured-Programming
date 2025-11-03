#include<stdio.h>
//Find the Largest Number using Conditional Operator
int main(){
 int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
 int largest;
  largest = (num1>num2) ? num1:num2 ;
  printf("The Largest number is :%d",largest);
  return 0;
}

