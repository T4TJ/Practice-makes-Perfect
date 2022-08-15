#include <stdio.h>

int main(){
  int i = 0,number = 0;
  printf("Enter a number:");
  scanf("%d", &number);
  for (i=1;i<=20;i++){
    printf("%d\n", (number*i));
  }
  return 0;
}
