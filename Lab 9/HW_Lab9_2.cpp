#include <stdio.h>

// N toonii tsipruudiin niilberiig butsaadag doorh hereglegchiin function-iig
// ashiglan 1...N zavsart orshih tsipruudiinhee niilbert huvaagddag
// toonuudiig ol.

int digit_sum(int n)
{
	int sum=0;
	int t=n;
	while (n){
    	int k=n%10;
    	sum=sum+k;
    	n=n/10;
   }
   	if (t%sum == 0)
    	return 1;
    	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	if(digit_sum(n))
    	printf("Huvaagdana.");
	else
    	printf("Huvaagdahgui.");
    	
    return 0;
}
