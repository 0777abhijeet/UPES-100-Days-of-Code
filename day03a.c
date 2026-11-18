//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
int temp;
float fahrenhite,celsius;
printf("Enter the temperature =");
scanf("%d",&temp);
fahrenhite= (((9.0/5.0)*temp)+32);
printf("%.2f",fahrenhite);
return 0;




}

