#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char word[1000];
    int i, j, found;
    int strL, wordL;

    	printf("Temdegt tsuvaagaa oruulna uu?: ");
    	gets(str);
    	printf("\n------------------------\n");
    	printf("Haih ugee oruulna uu?:  ");
    	gets(word);

    strL=strlen(str);
    wordL=strlen(word);
    for(i=0; i<strL-wordL; i++)
    {
        found = 1;
        for(j=0; j<wordL; j++)
        {
            if(str[i + j] != word[j])
            {
                found=0;
                break;
            }
        }

        if(found==1)
        {
            printf("Haisan > %s < ug %d deer bairlaj bna.\n", word, i);
        }
        else
            printf("-1");
            break;
    }

    return 0;
}
