#include <stdio.h>
int main()
{
    int i,j,row,star,space;
    scanf("%d", &row);
    space=row-1,star=1;

    for (i= 1; i<=row; i++)
    {
        for (j= 1; j<= space; j++)
            printf(" ");
        for (j= 1; j<=star; j++)
            printf("*");
        printf("\n");
        space--;
        star+=2;
    }
    return 0;
}
