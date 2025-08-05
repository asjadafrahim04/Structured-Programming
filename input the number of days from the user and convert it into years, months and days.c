#include <stdio.h>
//input the number of days from the user and convert it into years, months and days.

int main() {
    int totalDays, years, months, days;

    
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    
    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    days = totalDays % 30;

    
    printf("Equivalent time: %d year(s), %d month(s), %d day(s)\n", years, months, days);

    return 0;
}

