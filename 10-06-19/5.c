#include<stdio.h>
int main()
{
    int i;
    for(i=5; i<=100; i+=5)
    {
        continue;
        printf("%d\n", i);
    }
    return 0;
}
