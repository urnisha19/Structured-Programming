#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            break;
    }
    if (i==n)
        printf("Prime\n");
    else
        printf("Not Prime");
    return 0;
}
