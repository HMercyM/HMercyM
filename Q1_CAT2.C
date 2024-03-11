// program to compare numbers entered by a user
#include <stdio.h>

int main() {
int number;
printf("Enter an integer number:\n");
scanf("%d",&number);
if(number<100){
    printf("Your number is smaller than 100\n");
} else {
    printf("Your number contains more than or equal to 100\n");
}
    return 0;
}