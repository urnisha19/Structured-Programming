#include<stdio.h>
int main()
{
    int i,n,arr[100],max,min;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    max=arr[0];
    min=arr[0];
    for(i=0; i<n; i++)
    {
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
    }
    printf("Maximum=%d, Minimum=%d\n", max,min);
    return 0;
}
