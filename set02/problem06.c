#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
  char str[100], rev_str[100], a[100], reverse_a[100];
  input_string(a);
  int i;
  for (i = 0; a[i] != '\0'; i++)
  {
    str[i] = a[i];
  }
  str[i] = '\0';
  str_reverse(str, rev_str);
  output(a, rev_str);
  return 0;
}
void input_string(char *a)
{
  printf("Enter a string:\n");
  scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
  int len = 0;
  while (str[len] != '\0')
  {
    len++;
  }
  int i, j = 0;
  for (i = len - 1; i >= 0; i--)
  {
    rev_str[j] = str[i];
    j++;
  }
  rev_str[j] = '\0';
}
void output(char *a, char *reverse_a)
{
  printf("the reversed string of %s is %s\n", a, reverse_a);
}