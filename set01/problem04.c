#include<stdio.h>
void input(int *a, int *b)
{
    printf("enter the value of a: \n");
    printf("enter the value of b: \n");
    scanf("%d", &*a );
    scanf("%d", &*b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
printf("the sum is %d", sum);
}
int main()
{
    int a , b, sum ;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}
