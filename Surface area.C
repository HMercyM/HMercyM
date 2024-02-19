// program to find surface area of a cylinder 
#include <stdio.h>
#include <math.h>
int main() {
double radius,height;
printf("Enter the radius of the cylinder:\n");
scanf("%lf",&radius);
printf("Enter the height of the cylinder:\n");
scanf("%lf",&height);
double surface_area=2*M_PI*pow(radius,2)+2*M_PI*radius*height;
printf("The surface area of the cylinder is: %.2lf\n", surface_area);
    return 0;
}