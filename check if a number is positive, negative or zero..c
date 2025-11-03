#include<stdio.h>
// check if a number is positive, negative or zero 
int main(){
int number;
 printf("Enter the number : ");
 scanf("%d",&number);
 if(number > 0){
    printf("The number is positive");
  }else if(number < 0){
    printf("The number is negative");
    }else {
    printf("The number is zero");
    }
    return 0;
}
