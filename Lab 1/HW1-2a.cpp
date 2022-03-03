#include <stdio.h>
#include <math.h>

int main() {
	float hurtver, huvaari;
	int a, b, c, d;
	
	printf("\nA: ");
	scanf("%d", &a);
	printf("\nB: ");
	scanf("%d", &b);
	printf("\nC: ");
	scanf("%d", &c);
	printf("\nD: ");
	scanf("%d", &d);
	
	hurtver = sqrt(pow((pow(a, 3) + ((float)b / c)), 2) + d);
	huvaari = pow(d, 2) - (a*b)/(float)c;
	
	printf("\nHariu: %.2f", (hurtver / huvaari) * d);
	
	
	return 0;
}
