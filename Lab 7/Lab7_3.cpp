#include <stdio.h>

int main()
{
    int mat[10
	][10],urvuu[10][10];
    int i,j,row,col,f=1;
    printf("Husnegtiin hemjeegee oruulna uu? MxB \n");
    scanf("%d%d",&row,&col);
    printf("Husnegtiin utguudaa oruulna uu?: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("\nUgugdsun husnegt:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            urvuu[j][i]=mat[i][j];
        }
    }
    printf("\nUrvuu haruulsan husnegt:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d \t",urvuu[i][j]);
        }
        printf("\n");
    }
    
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(mat[i][j]!=urvuu[i][j])
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
            {
                printf("\nBish");
                break;
            }
        }
        if(f==1)
        {
            printf("\nMun");
        }
    }
    else
    {
        printf("\nBish");
    }
}
