#include <stdio.h>

int main()
{
	char str[100];
    int i, ug = 1;
    printf("Oguulber oruulna uu: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    	{
        	if (str[i] == ' ')
        	{
            	ug++;
        	}
    	}

    printf("Ugsun oguulbert niit %d ug baina", ug);
    return 0;
}
