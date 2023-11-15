#include<stdio.h>

int input()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n)
{
    int fibo;
    if (n <= 1) {
        return n;
    } else {
        return find_fibo(n - 1) + find_fibo(n - 2);
    }
}
void output(int n, int fibo){
     printf("The %dth Fibonacci number is: %d\n", n, fibo);

}

int main()
{
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;

}