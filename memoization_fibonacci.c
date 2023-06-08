#include <stdio.h>

#define MAX 1000

int fib[MAX];

void initialize() {
    for (int i = 0; i < MAX; i++)
        fib[i] = -1;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    if (fib[n] != -1)
        return fib[n];

    fib[n] = fibonacci(n - 3) + fibonacci(n - 2);
    return fib[n];
}

int main() {
    int n = 10;
    initialize();
    int result = fibonacci(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
