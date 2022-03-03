#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	float d, x1, x2;
	
	printf("\nA: ");
	scanf("%f", &a);
	printf("\nB: ");
	scanf("%f", &b);
	printf("\nC: ");
	scanf("%f", &c);
	
		d = b*b - 4*a*c;
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
	
	printf("x1 = %.2f\nx2 = %.2f", x1, x2);
      

	
	return 0;
}
