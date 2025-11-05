#include<stdio.h>
//check entered character vowels or consonants
int main (){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'A' ||
       ch == 'e' || ch == 'E' ||
       ch == 'i' || ch == 'I' ||
       ch == 'o' || ch == 'O' ||
       ch == 'u' || ch == 'U'){
        printf("%c the alphabet is vowel",ch);
    }else {
        printf("%c the alphabet is consonants",ch);
        }
        return 0;
}
