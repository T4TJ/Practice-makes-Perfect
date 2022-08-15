#include <stdio.h>

int main(){
  char c = 'a';

  while (c <= 'z'){

    if (c != 'e' && c != 'q'){
      printf("%c", c);
    }
    c++;
  }
  return 0;
}   


