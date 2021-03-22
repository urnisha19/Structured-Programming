#include<stdio.h>
int main()
{
    int i=0;
    while(i<100)
    {
        i+=5;
        if(i==5)continue;
        printf("%d\n",i);
    }
    return 0;
}
