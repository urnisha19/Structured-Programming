#include<stdio.h>
int main()
{
    int i,n,arr[100],min;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    min=arr[0];
    for(i=0; i<n; i++)
    {
        if (arr[i]<min)
            min=arr[i];
    }
printf("Minimum = %d\n", min);
return 0;
}
