#include <stdio.h>

// n toonii huvaagchdiin toog butsaah function-g bich.

int count(int n){
	int k=0;
	
	for(int i=1; i<=n; i++){
    	if(n%i==0)
    		k++;
	}
	return k;
}

int main(){
	int n,k,i;
	scanf("%d", &n);
	printf("%d\n", count(n));
	
	return 0;
}
