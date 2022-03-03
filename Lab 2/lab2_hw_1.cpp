#include <stdio.h>

int main() {
	int d1, d2, d3, d4, n, x;
		printf("Shalgah 4 orontoi toogoo oruulna uu: ");
		scanf("%d", &n);
		
		d1=n/1000;
		d2=n/100%10;
		d3=n/10%10;
		d4=n%10;
		
		x = (d4*1000) + (d3*100) + (d2*10) + d1;
		
		printf("%d %d %d %d \n", d1, d2, d3, d4);
	
	(x==n) && printf("Palindrom") || printf("Palindrom bish");
	
	return 0;
}
