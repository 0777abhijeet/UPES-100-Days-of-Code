//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=
*/

#include <stdio.h>
int main()
{
int a,b,area,perimeter;
printf("Enter the length = ");
scanf("%d",&a);
printf("Enter the breadth = ");
scanf("%d",&b);
area=a*b;
perimeter= 2*(a+b);
printf(" area is %d\n", area);
printf("perimeter is%d",perimeter);
return 0;



}