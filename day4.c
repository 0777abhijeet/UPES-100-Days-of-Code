//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main()
{
int radius ,circumference,area;
printf("Enter the radius =");
scanf("%d",&radius);
circumference = 2*3.14*radius;
area=3.14*radius*radius;
printf("circumference is %.2f\n",circumference);
printf("area is %.2f\n",area);
return 0;


}