#include<stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    //for loop
    printf("for number : ");
    for(int i= 1; i <= num; i++){
        if(i%2==0)
            printf(" %d ",i);
        }
     printf("\n");
     // while loop
    printf("While loop: ");
    int i=1;
    while(i<=num){
        if(i%2 == 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
 // do...while loop
    printf("do...While loop: ");
    int k=1;
    do{
        if(k%2 == 0)
            printf("%d ", k);
        k++;
    }while(k<=num);



return 0;
}
