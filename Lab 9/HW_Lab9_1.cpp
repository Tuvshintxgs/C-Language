#include <stdio.h>

// Ugugdsun buhel toog palindrome too mun baival 1, ugui bol 0-iig butsaah function todorhoil.

int prime(int);
main()
{
	int n, t;

	scanf("%d",&n);
	t=prime(n);
 
	if(t==1)
		printf("Mun", n);
   	else
    	printf("Bish", n);
   	return 0;
}
 
int prime(int a)
{
   	int i;
   	for (i=2;i<=a-1;i++)
   	{ 
    	if (a%i==0)
    	return 0;
	}
	return 1;
}
