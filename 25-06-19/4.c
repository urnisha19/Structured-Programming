#include<stdio.h>
int main()
{
    int i,arr[100],n,pos=0,neg=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0)
            pos++;
        else
            neg++;
    }
    printf("pos=%d, neg=%d\n", pos,neg);
    return 0;
}
