//A program to find all divisors of any integer number//
#include <stdio.h>
#include<math.h>
int main()
{
    int i,x,k;
    printf("Input an integer to find it's divisors: ");
    scanf("%d", &x);
    k=sqrt(x);
    printf("All the divisor of %d are: ", x);
    for(i = 1; i <= sqrt(x); i++)
    {
        if(x%i == 0)
        {
            printf("\n");
            printf("%d\n", i);
            printf("%d\n", x/i);
        }
    }
    return 0;
}
