// program to find the grade of a student 
#include <stdio.h>

int main() {
int maths,english,kiswahili,average;
printf("Enter the marks for maths,english,kiswahili");
scanf("%d %d %d",&maths,&english,&kiswahili);
average=(maths+english+kiswahili)/3;
if(average>=70 && average<=100)
printf("Grade A");
else if(average>=60 && average<=69)
printf("Grade B");
else if(average>=50 && average<=59)
printf("Grade C");
else if(average>=40 && average<=49)
printf("Grade D");
else if(average>=0 && average<=39)
printf("Grade E");
else if(average<=0)
printf("Fail");
    return 0;
}