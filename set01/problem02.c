//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the two numnbers\n");
    scanf("%f", &a);
    scanf("%f", &b );
c=a+b;
printf("the sum of the two numbers %f and %f is %f\n", a,b,c );
return 0;
}