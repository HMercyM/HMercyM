// program to calculate the body mass index 
#include <stdio.h>

int main() {
float weight,height;
printf("Enter weight in kilograms:\n");
scanf("%f",&weight);
printf("Enter height in meters:\n");
scanf("%f",&height);
float bmi=weight/(height*height);
printf("BMI: %.2f\n",bmi);
    return 0;
}