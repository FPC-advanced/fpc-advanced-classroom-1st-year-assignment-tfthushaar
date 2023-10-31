#include<stdio.h>
int input(){
    int n;
    printf("enter the three numbers: ");
    scanf("%d")
    return a;
}
int compare(int a, int b, int c) {
    int largest;
    if (a >= b && a >= c) {largest = a;}
    else if (b >= a && b >= c) {largest = b;}
    else {largest = c;}
    return largest;
}

void output(int a, int b, int c, int largest){
    printf("the largest number between %d, %d and %d is %d", a,b,c,largest);
}
int main()
{
    int a,b,c=input();
    int largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
