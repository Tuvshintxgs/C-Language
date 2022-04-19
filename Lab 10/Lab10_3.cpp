#include <stdio.h>

// n toonii huvaagchdiig ol. Gehdee tuunii huvaagchdiig A[] husnegted hadgal.

int count(int n, int A[]) {
	int k = 0;
	for (int i = 1; i <= n; i++) {
		if(n%i==0){
      		A[k]=i;
      		k++;
    	}
	}
	return k;
}

int main(){
	int n, A[100];
	
	scanf("%d",&n);
	int j = count(n,A);
		printf("%d\n",j);
	
	for(int i=0; i<j; i++)
		printf("%d ", A[i]);
		printf("\n");
	
	return 0;
}
