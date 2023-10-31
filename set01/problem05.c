#include <stdio.h>

int input() {
    int a;
    printf("enter the first number: ");
    scanf("%d", &a);
    return a;
}

int compare(int a, int b, int c) {
    int largest;
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    return largest;
}

void output(int a, int b, int c, int largest) {
    printf("the largest number between %d, %d and %d is %d", a, b, c, largest);
}

int main() {
    int a = input();
    int b = input();
    int c = input();
    int largest = compare(a, b, c);
    output(a, b, c, largest);
    return 0;
}
