#include <stdio.h>

int main(){
int i=0;
printf("Enter more than four digit of your choice:");
scanf("%d", &i);

for (i=10;i>=0;i--){
printf("The reverse number of what you typed is %d", i);
}
printf("\n");
return 0;
}

