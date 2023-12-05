#include <stdio.h>

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2) {
    return strcmp(string1, string2);
}

void output(char *string1, char *string2, int result) {
    printf("First String: %s\n", string1);
    printf("Second String: %s\n", string2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The second string is greater than the first string.\n");
    }
}

int main() {
    char input_string1[100], input_string2[100];
    input_two_strings(input_string1, input_string2);

    int result = stringcompare(input_string1, input_string2);

    output(input_string1, input_string2, result);

    return 0;
}

