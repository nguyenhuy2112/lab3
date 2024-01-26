#include <stdio.h>

double fibo(int n) {
    int t1 = 1, t2 = 1, f = 1;
    for (int i = 3; i <= n; i++) {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}

int main() {
    int n;
    do {
        printf("Enter a position in the Fibonacci sequence (n >= 1): ");
        scanf("%d", &n);
    } while (n < 1);
    printf("The value at position %d in the Fibonacci sequence is: %.0lf\n", n, fibo(n));

    return 0;
}
