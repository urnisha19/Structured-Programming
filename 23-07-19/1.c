#include<stdio.h>
int main()
{
    int i,j,mat[3][3],row,col;
    scanf("%d %d", &row,&col);
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
            if(i==j)
                printf("%d\n\n",mat[i][j]);
        }
    }
    return 0;
}
