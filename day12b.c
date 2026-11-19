//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main()
{
int n,bill;
printf("Enter the units =");
scanf("%d",&n);
if(n<=100){
bill=(n*5);
printf("The electricity bill is %d",bill);
}
else if(n>100 && n<=200){
bill=((n-100)*7)+500;
printf("The electricity bill is %d",bill);
}
else if(n>200 && n<=300){
    bill=((n-200)*10)+1200;
    printf("The electricity bill is %d",bill);
}
else{
    bill = ((n-300)*12)+2200;
    printf("The electricity bill is %d",bill);
}
return 0;


}