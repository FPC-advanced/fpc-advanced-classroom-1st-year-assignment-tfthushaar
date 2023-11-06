#include<stdio.h>
void input_two_strings(char *string1, char *string2){
    printf("enter the first string: \n");
    scanf("%s", string1);
    printf("\n enter the second string:\n");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
