#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    int flag=1;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
