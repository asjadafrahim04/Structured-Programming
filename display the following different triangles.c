//A
#include <stdio.h>
int main(){

int i,j;
 for(i = 1; i <= 4 ; i++){
        for(j = 1 ; j <= i;j++){
            printf("*");
        }
        printf("\n");
 }
 //B
  for(int x=5; x>=1; x--)
                {
                    for(int j=1; j<=5-x; j++)
                    {
                        printf(" ");
                    }
                    for(int j=1; j<=x; j++)
                    {
                        printf("*",j);
                    }
                    printf("\n");
                }
//C

    for(int i = 1;i <= 5;i++){
            for(j = i;j <=5;j++){
                printf("*");
            }
            printf("\n");
    }
//D
 for(int i = 1; i <= 4 ; i++){
        for(j = 1 ; j <= 4-i;j++){
            printf(" ");
        }
        for(j = 1;j<= i;j++){
            printf("*");
        }
        printf("\n");
 }
 //E
 for(int x=4;x>=1;x--)
                {
                    for(int j=1; j<=4-x; j++)
                    {
                        printf(" ");
                    }
                    for(int j=1; j<=x; j++)
                    {
                        printf("* ",j);
                    }
                    printf("\n");
                }
//F
   for(int x=1;x<=4;x++)
                {
                    for(int j=1; j<=4-x; j++)
                    {
                        printf(" ");
                    }
                    for(int j=1; j<=x; j++)
                    {
                        printf("* ",j);
                    }
                    printf("\n");
                }

//G
for(int i = 1; i <=5; i++){
        for(j = 1;j <= i;j++){
                printf("%d",j);
        }
        printf("\n");
    }
//H
for(int i=1;i<=5;i++){
            for(j=1;j<=5-i;j++){
            printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
//I
   int m = 5;
    for (int i = 0; i < 5; i++) {
        int n = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }
        printf("\n");
    }
 return 0;
}

