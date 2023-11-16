#include<stdio.h>
int input(){
   int num;
printf("enter the number: ");
scanf("%d", &num);
return num;
}

int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum){
    printf("the sum of %f and %f is %d", a, b, sum);
}
int main()
{
    int num1, num2, result;
    num1=input();
    num2=input();
    result = add(num1, num2);
    output(num1,num2,result);
    return 0;

}