// c program to read the yearly salary of an employee 
#include <stdio.h>

int main() {
float salary,tax;
printf("Enter the yearly salary:\n");
scanf("%f",&salary);
if(salary<=400000) {
    tax=salary*0.01;
} else if(salary>400000 && salary<=1000000){
    tax=400000*0.01+(salary-400000)*0.15;
} else {
    tax=400000*0.01+600000*0.15+(salary-1000000)*0.25;
}
printf("Tax: %.2f\n",tax);
    return 0;
}