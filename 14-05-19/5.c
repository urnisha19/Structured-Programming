#include<stdio.h>
int main()
{
    int x=0;
    int y=++x; //1st increment(x=x+1=0+1+=1) then assign (y=x=1)
    printf("x=%d y=%d\n", x,y);
    return 0;
}
