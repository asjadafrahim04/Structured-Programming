#include<stdio.h>
//Small letter and transform it to capital letters.

int main(){
  char smallLatter;
  scanf("%c",&smallLatter);

  char capitalLatter = smallLatter - 32;
  printf("%c",capitalLatter);
  return 0;
}

