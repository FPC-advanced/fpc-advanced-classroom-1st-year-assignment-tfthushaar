#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, result;

    number = input();   
    result = square_root(number);   
    output(number, result);   

    return 0;
}
float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}
float square_root(float n) {
    float x = n;   
    float epsilon = 0.00001;  

    while ((x * x - n) > epsilon) {
        x = (x + n / x) / 2.0;   
    }

    return x;
}
void output(float n, float sqrroot) {
    printf("Square root of %.2f = %.4f\n", n, sqrroot);
}
