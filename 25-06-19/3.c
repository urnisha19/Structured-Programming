#include<stdio.h>
int main()
{
    int i,arr[100],n;
    float sum=0,average;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    average=sum/n;
    printf("Average=%.2lf\n", average);
    return 0;
}
