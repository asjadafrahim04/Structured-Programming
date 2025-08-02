#include <stdio.h>
#include <ctype.h>
// Transform small letter to capital letter using toupper() function
int main(){
    char smallLetter;
    scanf("%c", &smallLetter);
    char capitalLetter = toupper(smallLetter);
    printf("%c", capitalLetter);

    return 0;
}
