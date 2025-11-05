#include<stdio.h>
 //determine a candidate’s age is eligible for casting the vote or not
int main(){
 int age;
 printf("Enter the age : ");
 scanf("%d",&age);
 if(age>=18){
    printf("Eligible for vote");
 }else{
 printf("Not eligible for vote");
  }
  return 0;
}
