#include <stdio.h>

int main()
{
	float x;
	
	printf("Avsan onoogoo oruulna uu? (0-35): ");
	scanf("%f", &x);
	
	(35*0.6)>x && printf("F") || (35*0.7)>x && printf("D") || (35*0.8)>x && printf("C") || (35*0.9)>x && printf("B") || (35*1.0)>=x && printf("A");
	
	return 0;
}
