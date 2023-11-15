#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev_str[len - 1 - i] = str[i];
    }
    rev_str[len] = '\0';
}

void output(char *a, char *reverse_a)
{
    printf("\n\nOriginal string is: %s\n", a);
    printf("Reversed string is: %s\n", reverse_a);
}

int main()
{
    char input_str[100];   
    char reversed_str[100];

    input_string(input_str);
    str_reverse(input_str, reversed_str);
    output(input_str, reversed_str);

    return 0;
}
