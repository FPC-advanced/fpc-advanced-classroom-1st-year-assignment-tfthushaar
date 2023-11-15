#include <stdio.h>
#include <math.h>

int input_array_size() {
    int n;
    printf("Enter the n'th number: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1;
    }
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    n = input_array_size();
    int a[n];
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);
    return 0;
}
