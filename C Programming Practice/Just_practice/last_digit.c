#include <stdio.h>
int main(){
  int n;
  int last;
  printf("Enter more than one number:");
  scanf("%d", &n);

  last = n % 10;

  if (last > 5) {
    printf("Last digit of %d is %d and is greater than 5\n", n, last);
  } else if (last == 0) {
    printf("Last digit of %d is %d and is equal to 0\n", n, last);
  } else (last < 0) {
    printf("Last digit of %d is %d and is less 6 and equal to zero", n, last);
  }

  return 0;
}
