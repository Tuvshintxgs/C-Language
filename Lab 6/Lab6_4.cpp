#include <stdio.h>
//Toog array-iin haana baigaag shalga.

int main()
{
    int arr[100];
    int hemjee, i, haih, ilerts;

    	printf("Husnegtiin hemjeegee oruulna uu: ");
    	scanf("%d", &hemjee);

    	printf("Husnegtiin toonuudaa oruulna uu: \n");
    	for(i=0; i<hemjee; i++)
    	{
    	    scanf("%d", &arr[i]);
    	}
    		printf("--------------------------------");
    		printf("\nHaih elementee oruulna uu: \n");
   			scanf("%d", &haih);
    		ilerts = 0; 
    
    	for(i=0; i<hemjee; i++)
    {
        if(arr[i] == haih)
        {
            ilerts = 1;
            break;
        }
    }
    	if(ilerts == 1)
    {
        	printf("\n%d too %d-r bairand bairlaj bna", haih, i + 1);
    }
    	else
    {
    	    printf("\n-1");
    }
    return 0;
}
