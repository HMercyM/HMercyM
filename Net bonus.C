// program to print the net bonus amount 
#include <stdio.h>

int main() {
float salary,bonus,netBonus;
int yearsOfService;
printf("Enter your salary:\n");
scanf("%f",&salary);
printf("Enter your years of service:\n");
scanf("%d",&yearsOfService);
if(yearsOfService>5){
    bonus=0.05*salary;
    netBonus=salary+bonus;
    printf("Your net bonus amount is: %.2f\n",netBonus);
} else {
    printf("Sorry, you are not eligible for a bonus:\n");
}

    return 0;
}