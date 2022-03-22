#include <stdio.h>
// 1<n<100 toog hereglegchees av. n toog husnegted hadgalj daraa ni tuuniig usuh, uruudah esvel ymar negen baidlaar erembelegdeegui haruul.

int main()
{
	int n, hemjee[100], a=1, d=1, i;
	printf("Husnegtiin hemjeegee oruulna uu: ");
	scanf("%d", &n);
	
	printf("Husnegtiin toonuudaa oruulna uu: \n", hemjee);
	for(i=0; i<n; i++)
		scanf("%d", &hemjee[i]);
		i = 0;
	
	while((a==1 || d==1) && i<n-1)
	{
    	if(hemjee[i]<hemjee[i+1])
			d=0;
    	else if (hemjee[i]>hemjee[i+1])
    		a=0;
    		i++;
	}
	printf("\n-----------------------------------");
	if (a==1)
		printf("\nHusnegt ussun\n");
	else if (d == 1)
		printf("Husnegt buursan\n");
	else
		printf("Husnegt ymar negen baidlaar erembelegdeegui\n");

  return 0;
}
