#include <stdio.h>
#include <math.h>

int input_number()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n)
{
    int i;
    int flag = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

void output(int n, int result)
{
    if (result == 1)
    {
        printf("The number %d is a prime number.\n", n);
    }
    else
    {
        printf("The number %d is not a prime number.\n", n);
    }
}

int main()
{
    int num = input_number();
    int res = is_prime(num);
    output(num, res);
    return 0;
}
