#include<stdio.h>

int main(){
	int n,sum=0,m;
		printf("N toog oruulna uu: ");
		scanf("%d",&n);
	while(n>0){
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("N toonii tsipruudiin niilber= %d",sum);
		
	return 0;
} 
