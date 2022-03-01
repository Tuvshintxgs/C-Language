#include <stdio.h>

// a,b toonii XIEX-iig ol.

int main()
{
    int a, b, i, xiex;
    	printf("a toogoo oruulna uu: ");
    	scanf("%d", &a);
    	printf("b toogoo oruulna uu: ");
    	scanf("%d", &b);
    for(i=1; i<=a && i<= b; ++i)
    {
        if(a%i==0 && b%i==0)
            xiex = i;
    }

    	printf("%d ba %d toonuudiin XIEX: %d", a, b, xiex);

    return 0;
}
