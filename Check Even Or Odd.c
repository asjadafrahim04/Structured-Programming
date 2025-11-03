#include<stdio.h>
int main(){
int number;
printf("Enter the number : ");
scanf("%d",&number);
if(number % 2 == 0){
    printf("Even");
}else{
    printf("odd");
}
return 0;
}
