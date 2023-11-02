#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex() {
    Complex num;
    printf("Enter the real and imaginary parts of the complex number:\n");
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}


Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("First Complex Number: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Second Complex Number: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex num1, num2, sum;
    num1 = input_complex();
    num2 = input_complex();
    sum = add_complex(num1, num2);
    output(num1, num2, sum);
    return 0;
}
