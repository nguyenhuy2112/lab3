#include <stdio.h>

int getRelPos(double x, double y, double r) {
    double d2 = x*x + y*y;
    double r2 = r*r;

    if (d2 < r2) return 1;  
    else if (d2 == r2) return 0; 
    return -1;   
}

int main() {
    double x, y, r;
    int result;
    printf("enter (x, y): ");
    scanf("\n%lf,\n%lf", &x, &y);
    do {
        printf("enter r (r >= 0): ");
        scanf("\n%lf", &r);
    } while (r < 0);
    result = getRelPos(x, y, r);
    if (result == 1) {
        printf("incircle\n");
    } else if (result == 0) {
        printf("oncircle\n");
    } else {
        printf("outcircle\n");
    }

    return 0;
}

