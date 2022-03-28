#include <stdio.h>

int main()
{
    int m,n;
    printf("Muruu oruulna uu?\n");
    scanf("%d",&m);
    printf("Baganaa oruulna uu?\n");
    scanf("%d",&n);
    int arr[m][n];
    printf("Husnegtiin utguudaa oruulna uu?\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nHusnegt:\n");
    for(int i=0;i<m;i++)
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
	printf("\n--------------------------------");
    printf("\nMuriin niilber:\n");
    for(int i=0;i<m;i++)   
    {
        int rsum=0;
        for(int j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("%d-r muriin niilber %d\n",i+1,rsum);
    }
    printf("\nBaganiin niilber:\n");
    for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("%d baganiin niilber %d\n",i+1,csum);
    }
    return 0;
}
