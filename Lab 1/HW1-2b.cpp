#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, x;
	float pi = 3.14;
	
	printf("\nA: ");
	scanf("%f", &a);
	printf("\nB: ");
	scanf("%f", &b);
	printf("\nx: ");
	scanf("%f", &x);

		x = (x * pi) / 180;
	
		c = sqrt((b*b) + (a*a) - (2*a*b*cos(x)));
		
	printf("%.2f", c);
	
	return 0;
}
