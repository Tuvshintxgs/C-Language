#include <stdio.h>

// Doorh huvisagchuudiin sanah oin haygiig hevlen haruul.

int a[100];
int b=4;
double c=5;
int *p=&b;

int main(){

	printf("%u\n", &a[100]);
	printf("%u\n", &b);
	printf("%u\n", &c);
	printf("%u\n", &p);

return 0;
}
