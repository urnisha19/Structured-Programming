#include<stdio.h>
int main()
{
    int x=0;
    int y=x++; //1st assign(y=x=0) then increment(x=x+1=0+1+=1)
    printf("x=%d y=%d\n", x,y);
    return 0;
}
