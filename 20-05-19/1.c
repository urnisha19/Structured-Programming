#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    scanf("%d %d %c", &a,&b,&ch);
    if(ch=='S')
        printf("Sum=%d\n", a+b);
    else if(ch=='s')
        printf("Sub=%d\n", a-b);
    else if(ch=='M')
        printf("Mul=%d\n", a*b);
    else if(ch=='D')
        printf("Div=%d\n", a/b);
    return 0;
}
