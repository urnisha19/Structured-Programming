#include<stdio.h>
int main()
{
    int i,j,row,col,mat[10][10];
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
    return 0;
}
