//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade .

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F


*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the marks =");
scanf("%d",&n);
if(100>=n && n>=90){
    printf("Grade A");
}
else if(89>=n && n>=80){
    printf(" Grade B");
}
else if(79>=n && n>= 70){
    printf("Grade C");

}
else if (69>=n && n>= 60){
    printf("Grade D");

}
else{
    printf("Grade F");
}
return 0;
}