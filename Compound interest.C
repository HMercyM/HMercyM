// program to calculate compound interest 
#include <stdio.h>

int main() {
int principle,rate,time;
float interest;
printf("Enter principle,rate,time:\n");
scanf("%d",&principle,&rate,&time);
interest=principle*(1+rate/100)^time;
printf("The interest is %.2f",interest);

    return 0;
}