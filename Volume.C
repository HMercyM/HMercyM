// program to find the volume of a cylinder 
#include <stdio.h>

int main() {
int radius,height;
double pi;
float volume;
printf("Enter pi,radius,height:\n");
scanf("%d %ld",&radius,&height,&pi);
volume=pi*(radius^-2)*height;
printf("The volume is %.2f",volume);

    return 0;
}