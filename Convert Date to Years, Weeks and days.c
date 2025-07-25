#include<stdio.h>
// convert days to years, weeks and days.
int main(){
    int days;//420
    scanf("%d",&days);

    int years = days/365;
    int weeks = (days%365)/7;
    int remaining_days = (days%365)%7;

    printf("Years : %d\n",years);
    printf("Weeks : %d\n",weeks);
    printf("Remaining Days : %d\n",remaining_days);
    return 0;
}
