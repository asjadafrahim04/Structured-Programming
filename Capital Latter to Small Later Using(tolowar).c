#include<stdio.h>
// Capital letter and transform it to a small letter

int main(){
  char capitalLatter;
  scanf("%c",&capitalLatter);

  char smallLatter = capitalLatter + 32;
  printf("%c",smallLatter);
  return 0;
}
