#include<stdio.h>
//check alphabets using conditional operators.
int main(){
char character;
 printf("Enter character : ");
 scanf("%c",&ch);
int Alphabet = ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'));
if(Alphabet){
  printf("%c is an alphabet",character);
}else{
  printf("%c is not an alphabet",character);
}
return 0;
}
