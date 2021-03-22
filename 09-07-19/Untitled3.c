#include<stdio.h>
int main()
{
    int i,n,arr[100],max;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if (arr[i]>max)
            max=arr[i];
    }
printf("Maximum = %d\n", max);
return 0;
}
