#include<stdio.h>
#include<math.h>
int validDate(int d, int m, int y){
	int maxd = 31;

	if(d < 1 || d > 31 || m < 1 || m > 12){
		return 0;
	}
	if( m == 4 || m == 6 || m == 9 || m == 11){
		maxd = 30;
	}
	else if(m == 2){
		if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
			maxd=29;
		}
		else{
			maxd= 28;
		}
		return d <= maxd;
	}
}

int main()
{
	int d, m, y;
	printf("enter day:");
	scanf("\n%d", &d);
	printf("enter month:");
	scanf("\n%d", &m);
	printf("enter year:");
	scanf("\n%d", &y);
	if(validDate(d, m, y)){
		printf("\nvalid date");
		
	}
	else{
		printf("\ninvalid date");
	}
	return 0;
}