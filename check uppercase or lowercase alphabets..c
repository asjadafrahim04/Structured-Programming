#include<stdio.h>
 //check uppercase or lowercase alphabets
int main(){
 char ch;
 printf("The character is:");
 scanf("%c",&ch);

 if(ch >= 'A' && ch <= 'Z'){
    printf("%c is an uppercase alphabet.\n", ch);
 }else if (ch >= 'a' && ch <= 'z'){
    printf("%c is an lowercase alphabet.\n", ch);
}else {
     printf("%c is not an alphabet.\n",ch);
     }
 return 0;
 }
