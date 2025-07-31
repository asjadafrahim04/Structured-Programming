#include <stdio.h>
#include <ctype.h>
// Transform capital letter to small letter using tolower() function
int main(){
    char capitalLetter;
    scanf("%c", &capitalLetter);
    char smallLetter = tolower(capitalLetter);
    printf("%c", smallLetter);

    return 0;
}
