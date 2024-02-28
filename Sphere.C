// c function to find the volume of a sphere
#include <stdio.h>
#include <math.h>

double SphereVolume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    double radius;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    double volume =SphereVolume(radius);
    printf("The volume of the sphere is: %lf\n", volume);

    return 0;
}