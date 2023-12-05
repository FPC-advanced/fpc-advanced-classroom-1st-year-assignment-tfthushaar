#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
  int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n, a);
  sum = sum_composite_numbers(n, a);
  output(sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter the array elements\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int i, j, sum = 0;
  for (j = 0; j < n; j++)
  {
    for (i = 2; i <= a[j] / 2; i++)
    {
      if (a[j] % i == 0)
      {
        sum = sum + a[j];
        break;
      }
    }
  }
  return sum;
}
void output(int sum)
{
  printf("Sum of Composite Number is %d", sum);
}