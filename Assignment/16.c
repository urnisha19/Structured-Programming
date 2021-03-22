// C program to print pyramid star pattern
#include <stdio.h>
int main()
{
    int i,j,row,star,space;
    scanf("%d", &row);
    space=row-1,star=1;

    for (i= 1; i<=row; i++)  // Loop to print rows
    {
        for (j= 1; j<= space; j++)  // Loop to print spaces in a row
                printf(" ");
        for (j= 1; j<=star; j++) // Loop to print stars in a row
            printf("*");
        printf("\n");
        space--;
        star+=2;
    }
    return 0;
}
