#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    long long f=1;
    for(i=1; i<=n; i++)
        f*=i;
    printf("Factorial= %lld\n",f);
    return 0;
}
