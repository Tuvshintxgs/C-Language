#include <stdio.h>
// 1<n<100 toog hereglegchees av. Husnegted 1,2,3,4,5,....n toonuudiig hevle.

int main()
{
    int arr[100];
    int hemjee, i;

    printf("Husnegtiin hemjeegee oruulna uu: ");
    scanf("%d", &hemjee);

    printf("Husnegtiin toonuudaa oruulna uu: \n", hemjee);
    for(i=0; i<hemjee; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\n-----------------------------------");
    printf("\nHusnegted baigaa toonuud bol: \n");
    for(i=0; i<hemjee; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
