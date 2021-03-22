#include<stdio.h>
int main ()
{
    int i=1;
    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }
    printf("After loop ending:");
    printf("%d\n",i);
    return 0;
}
