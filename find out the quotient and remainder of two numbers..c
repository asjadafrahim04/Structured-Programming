#include <stdio.h>
//find out the quotient and remainder of two numbers.
int main(){
    int x, y; //I/p=x: 53 & y: 3
    scanf("%d %d", &x, &y);

    int quotient = x/y;

    printf("Quotient: %d\n", quotient);

    int z = quotient * y;

    int remainder = x - z;

    printf("Remainder: %d\n", remainder);


    return 0;
}