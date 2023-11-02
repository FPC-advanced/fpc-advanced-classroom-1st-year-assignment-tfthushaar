#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "hello";
    char str4[] = "Hellw";

    // Compare str1 and str2
    int result1 = strcmp(str1, str2);
    if (result1 == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // Compare str1 and str3
    int result2 = strcmp(str1, str3);
    if (result2 == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    // Compare str1 and str4
    int result3 = strcmp(str1, str4);
    if (result3 < 0) {
        printf("str1 is less than str4.\n");
    } else if (result3 > 0) {
        printf("str1 is greater than str4.\n");
    } else {
        printf("str1 and str4 are equal.\n");
    }

    return 0;
}
