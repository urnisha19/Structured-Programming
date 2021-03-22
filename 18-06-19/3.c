#include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2 != 0)
            {
                printf("1 ",j);

            }
            else if(j%2 == 0)
            {
                printf("0 ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
