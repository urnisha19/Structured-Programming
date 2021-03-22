#include<stdio.h>
int main()
{
    int i,j;
    int mat[3][3]= {1,2,3,4,5,6,7,8,9};
    //int mat[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; declaration can also be done this way
    //int mat[3][]= {1,2,3,4,5,6,7,8,9};//if u don't give number of column it won't print
    //int mat[][3]= {1,2,3,4,5,6,7,8,9};//if u don't give number of row it will print as it is
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
