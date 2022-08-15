#include <stdio.h>
#include <stdlib.h>

int main(){
  char ch;
  for (ch = 0;ch<=9;ch++){
    printf("%d", ch);
  } for (ch='a';ch<='f';ch++){
    printf("%c", ch);
  }
  printf("\n");
  return (0);
}
