#include <stdio.h>
// A bolon B array-d adilhan elementuud baigaa esehiig shalgah


int main()
{
    int a[100], b[100], c[100], i, hemjee1, hemjee2, j, k=0, x, count=0;
    printf("Ehnii husnegtend heden too bagtaah ve?: \n");
    scanf("%d", &hemjee1);
    printf("Daraachiin husnegtend heden too bagtaah ve?: \n");
    scanf("%d", &hemjee2);
    printf("Ehnii husnegtiin utguudaa oruulna uu?: ", hemjee1);
    for(i=0; i<hemjee1; i++)
        scanf("%d", &a[i]);
    printf("Hoyr dahi husnegtiin utguudaa oruulna uu?: ", hemjee2);
    for(i=0; i<hemjee2; i++)
        scanf("%d", &b[i]);
    for(i=0; i<hemjee1; i++)
    {
        for(j=0; j<hemjee2; j++)
        {
            if(a[i]==b[j])
            {
                count=0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    printf("\nEhnii husnegtiin utguud: \n");
    for(i=0; i<hemjee1; i++)
    {
        if(i==(hemjee1-1))
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
    printf("\nHoyr dahi husnegtiin utguud:\n");
    for(i=0; i<hemjee2; i++)
    {
        if(i==(hemjee2-1))
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }
    printf("\nAdilhan toonuud: \n");
    for(i=0; i<k; i++)
    {
        if(i==(k-1))
            printf("%d", c[i]);
        else
            printf("%d, ", c[i]);
    }
    return 0;
}
