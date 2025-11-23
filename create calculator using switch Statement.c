#include<stdio.h>
int main(){
    char op;
    printf("Enter the operator:");
    scanf("%c",&op);
    float num1,num2,result;
    printf("Enter the numbers: ");
    scanf("%f%f",&num1,&num2);
    switch (op){
   case '+':
       result = num1 + num2;
    printf("Result : %0.2f\n",result);
    break;
      case '-':
       result = num1 - num2;
    printf("Result : %0.2f\n",result);
    break;
      case '*':
       result = num1 * num2;
    printf("Result : %0.2f\n",result);
    break;
      case '/':
       result = num1 / num2;
    printf("Result : %0.2f\n",result);
    break;
    }
    return 0;
}
