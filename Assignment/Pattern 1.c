//Program to print Rhombus star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=row; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
