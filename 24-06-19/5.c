#include<stdio.h>
int main()
{
    int i,arr[100],n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=n-1; i>=0; i--)
        printf("%d\n", arr[i]);
    return 0;
}
