#include <stdio.h>
//check whether a character is an alphabet, digit or special character
int main(){
    char character;
    printf("Enter the character : ");
    scanf("%c",&character);
  if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
    printf("%c is alphabet character",character);
  }else if(character >= '0' && character <= '9'){
    printf("%c is digit charater",character);
  }else {
   printf("%c is special charater",character);
   }
return 0;

}
