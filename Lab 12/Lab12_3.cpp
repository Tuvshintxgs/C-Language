#include <stdio.h>

// Husnegtees hamgiin ih elementiin haygiig oloh programm

int main() {
	
	int a[100], n, i, max;
	int *p;
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	printf("===================\n");
	for(i=0; i<n; i++)
	printf("%d\n", a[i]);
	p=&a[0];
	max=a[0];
	for(i=0; i<n; i++){
		if(max<=*p)
		max=*p;
		p++;
	}
	printf("\n%d", max);
	
	return 0;
}
