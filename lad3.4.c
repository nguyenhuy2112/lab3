#include <stdio.h>

double factorial(int n) {
    double p = 1;
    for (int i = 2; i <= n; i++) {
        p *= i;
    }
    return p;
}

int main() {
    int n;
    do {
        printf("nhap mot so nguyen duong: ");
        scanf("%d", &n);
    } while (n < 0);
    printf("giai thua cua %d la: %.0lf\n", n, factorial(n));
    return 0;
}
