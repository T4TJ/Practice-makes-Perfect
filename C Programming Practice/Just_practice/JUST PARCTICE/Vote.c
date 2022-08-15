/*Profram to check if you are eligible for voting or not*/

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age >= 18) {
        printf("You're eligible to vote and proceed to the next section to cast your vote and vote wisely\n");
    } else {
        printf("Your not eligible. Go sit with your mama/n");
    }
    

}