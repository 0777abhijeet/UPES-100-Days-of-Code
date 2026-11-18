//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
int hours,minutes,s;
printf("Enter the time(seconds)=");
scanf("%d",&s);
minutes= s/60;
hours=minutes/60;
printf("hours is %d: minutes is %d : seconds is %d", hours,minutes ,s);
return 0;



}