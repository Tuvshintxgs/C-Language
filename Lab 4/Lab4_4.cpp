#include <stdio.h>

int main()
{
    int i, n, niilber=0;

    printf("Tegsh toonuudiin niilber: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        niilber += i;
    }

    printf("1 ees %d hurtel toonii niilber = %d", n, niilber);

    return 0;
}
