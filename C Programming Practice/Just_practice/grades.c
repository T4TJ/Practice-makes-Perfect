/*Calculating grades scores*/
#include <stdio.h>
int main (){
  int mark;
  printf("Enter your score:");
  scanf("%d", &mark);

  if (mark > 85 && mark <=100) {
    printf("Congrats! you got A.\n");
  } else if (mark > 60 && mark <= 85) {
    printf("You did well! You got B+.\n");
  } else if (mark > 40 && mark <= 60 ) {
    printf("You tried! You got B.\n");
  } else if (mark > 30 && mark <= 40) {
    printf("Study more! You can do better. You got C.\n");
  } else {
    printf("I'm sorry, you failed and you're repeating this class! But I believe you can do better.\n");
  }
  return (0);
}
