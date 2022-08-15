#include <stdio.h>

int main (){
  int c = 97;

  while (c <= 122){
    if (c != 103 && c != 113){
      printf("%c", c);
    }
    c++;
  }
  printf("\n");
  return 0;
}
