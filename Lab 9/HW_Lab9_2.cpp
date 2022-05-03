#include <stdio.h>

// 1...N zavsart bairlah tsipruudiinhee niilbert huvaagddag toonuudiig ol.

int digit_sum(int n);

int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		if (i%digit_sum(i)==0){
			printf("%d ",i);
    		}
  	}
	return 0;
}

int digit_sum(int n){
	int s=0;
	while(n>0){
    	s=s+n%10;
    	n=n/10;
  		}
	return s;
}
