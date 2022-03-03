#include<stdio.h>

int main()
{
    int i, n, ih, baga, niit;
    	printf ("Niit heden too oruulah ve?: ");
    	scanf ("%d", &niit);
    	printf ("Toogoo oruulna uu?: ");
    	scanf ("%d", &n);
    	ih=n;
    	baga=n;
    for (i=1; i<=niit-1 ; i++)
    {
       		printf ("Daraagiin toogoo uruulna uu?: ");
        	scanf ("%d",&n);
        if (n>ih)
        	ih=n;
        if (n<baga)
        	baga=n;
    }
    	printf ("Hamgiin ih too ni:  %d \n", ih);
    	printf ("Hamgiin baga too ni: %d", baga);
    return 0;
}
