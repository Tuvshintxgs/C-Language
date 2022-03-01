#include <stdio.h>

// N toonii buh huvaagchdiig ol.

int main()
{
	int N, i;
		printf("\nUgsun N toonii buh huvaagchdiig ol: ");
		scanf("%d", &N);
		
		printf("%d toonii huvaagchid: \n", N);
	for(i=1; i<=N; i++) {
		if((N%i)==0){
			printf("\n%d", i);
		}
	}
	return 0;
}
