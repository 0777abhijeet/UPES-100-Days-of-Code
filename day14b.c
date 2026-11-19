//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
int i,n,product=1;
printf("Enter the number= ");
scanf("%d",&n);
for(i=2;i<=n;i=i+2){
    product=product*i;
}
printf("the sum is %d",product);
return 0;}




