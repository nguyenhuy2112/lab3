#include <stdio.h>

void printMinMaxDigits(int n) {                              
     int max, min;
     int digit;
     max = n % 10;
	 min = n % 10;
	 while( n > 0) {
		digit = n % 10;
		       n=n/10;
		if ( max < digit) {
			 max = digit;
		}
		if ( min > digit) {
			 min = digit;
		}
     }
     printf("Minimum of digits: %d\n", min);
     printf("Maximum of digits: %d\n", max);    
}

int main () {
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);
	printMinMaxDigits(n);
return 0;
}