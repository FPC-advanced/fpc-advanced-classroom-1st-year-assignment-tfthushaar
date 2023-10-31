#include<stdio.h>

int input(int *a, int *b, int *c){
    printf("enter the three numbers: ");
    scanf("%d", &*a);
    scanf("%d", &*b);
    scanf("%d", &*c);
    return *a;
}
void compare(int a, int b, int c, int *largest){
    *largest=0;
    if(a > b){
        *largest=a;
    }
    else{
        *largest=b;
    }
    if(c > *largest){
        *largest=c;
    }
}
void output(int a, int b, int c, int largest) {
    printf("the three numbers are %d, %d, and %d.\n", a, b, c);
    printf("the largest number is %d.\n", largest);
}
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}