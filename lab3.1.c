#include <stdio.h>
#include <math.h>

int prime(int n) {
    int m = sqrt(n);
    if (n < 2) 
	return 0;

    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return 0; // n không phải là số nguyên tố
        }
    }
    return 1; // n là số nguyên tố
}

int main() {
    int n;

    // Nhận n trong khi n nhỏ hơn 2
    do {
        printf("enter n (n>= 2): ");
        scanf("%d", &n);
    } while (n < 2);

    // In ra các số nguyên tố từ 2 đến n
    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            printf("%d la so nguyen to\n", i);
        }
    }
    int prime(int n) {
    int m = sqrt(n);
    if (n < 2) return 0;

    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return 0; // n không phải là số nguyên tố
        }
    }
    return 1; // n là số nguyên tố
}

    return 0;
}