#include<stdio.h>
int main()
{
    int i;
    for(i=5; i<=100; i+=5)
    {
        printf("%d\n", i);
        continue;
    }
    return 0;
}
