#include <stdio.h>

int main()
{
	int n;
	printf("Shalgah toogoo oruulna uu: ");
	scanf("%d", &n);
	
	if(n % 2 == 0)
	{
		printf("Ugsun too tegsh \n", n);
		if(n % 10 == 0 && n % 4 == 0)
		{
			printf("10,4-t huvaagdana", n);
		}
			else if(n % 2 == 0 && n % 8 == 0)
			{
				printf("2,8-t huvaagdana", n);
			}
		else{
			printf("10,4 bolon 2,8d zereg huvaagdahgui");
		}
	}
	else
	{
		printf("Ugsun too sondgoi \n", n);
		if(n % 3 == 0 && n % 7 == 0)
		{
			printf("3,7-d huvaagdana", n);
		}
			else if(n % 5 == 0 && n % 9 == 0)
			{
				printf("5,9-d huvaagdana", n);
			}
		else{
			printf("3,7 bolon 5,9-d zereg huvaagdahgui");
		}
	}
	
	return 0;
}
