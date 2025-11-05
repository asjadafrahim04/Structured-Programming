#include<stdio.h>
//accept two integers and check whether they are equal or not
int main(){
 int num1,num2;
  printf("Enter the first integer : ");
  scanf("%d",&num1);
  printf("Enter the second integer : ");
  scanf("%d",&num2);
  if(num1==num2){
    printf("They are equal");
  }else {
  printf("They are not equal");
  }
return 0;
}
