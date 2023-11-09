
#include<stdio.h>
int input()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a;
}
int find_gcd(int a, int b){
    while (a != b) {
    if (a > b) {
    a = a - b;
    } 
    else {
    b = b - a;
    }
    }
    return a;
}
void output(int a, int b, int gcd){
    printf("The GCD of the two numbers is: %d\n", gcd);

}
int main()
{
    int a, b, gcd;
    a = input();
    b = input();
    gcd = find_gcd(a, b);
    output(a, b, gcd);
    return 0;
}