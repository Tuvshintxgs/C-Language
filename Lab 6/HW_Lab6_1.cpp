#include<stdio.h>

int ifexists(int z[], int u, int v)
{
    int i;
    if (u==0) return 0;
    for (i=0; i<=u;i++)
        if (z[i]==v) return (1);
    return (0);
}
int main()
{
    int p[100], q[100], r[100];
    int m,n;
    int i,j,k;
    	k=0;
    	printf("Ehnii husnegted heden element bagtaah ve?: ");
    	scanf("%d",&m);
    	printf("%d too oruulna uu: \n",m);
    	for(i=0;i<m;i++ )
        	scanf("%d",&p[i]);
    		printf("\nDaraachiin husnegted heden element bagtaah ve?: ");
    		scanf("%d",&n);
    		printf("%d too oruulna uu: \n",n);
    	for(i=0;i<n;i++ )
        	scanf("%d",&q[i]);
    		k=0;
    	for (i=0;i<m;i++)
    	{
        	for (j=0;j<n;j++)
        	{
           	if (p[i]==q[j])
           		{
               		if(!ifexists(r,k,p[i]))
               		{
                   		r[k]=p[i];
                   		k++;
               		}
            	}
        	}
    	}
    if(k>0)
    {
        printf("\nIjil toonuud: \n");
        for(i = 0;i<k;i++)
            printf("%d\n",r[i]);
    }
    else
        printf("Adilhan element alga\n");
}
