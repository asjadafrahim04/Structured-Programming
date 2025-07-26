#include<stdio.h>
//convert Celsius value into Fahrenheit value
int main(){
    float calsius;
    scanf("%f",&calsius);

    float fahrenheit;
    fahrenheit = (calsius*9/5)+32;
    printf("%.3lf",fahrenheit);
    return 0;
}
