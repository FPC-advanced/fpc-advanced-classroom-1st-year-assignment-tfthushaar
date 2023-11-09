#include<stdio.h>
#include<math.h>
int input_array_size()
{
    int n;
    printf("\nenter the size of the array: ");
    scanf("%d", &n);
    return n;
}


void input_array(int n, int a[n])
{
    for (int i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
        }
}


int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for (int i = 2; i <= sqrt(n); i+=2) {
    if ((n % i == 0)) {
     while (n % i == 0){
     n /= i;
        }
    printf("%d\t", i);
        }
        else {
        continue;
         }
        }
    if (n > 1) {
         printf("%d\t", n);
            }
            return sum+n;
        }

void output(int sum){
    printf("\nthe sum of composite numbers is: %d \n",sum);
}

int main()
{
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;}