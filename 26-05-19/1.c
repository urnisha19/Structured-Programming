#include<stdio.h>
int main()
{
    char ch;
    ch=getchar();
    switch(ch)
    {
    case 'W':
        printf("White\n");
        break;
    case 'R':
        printf("Red\n");
        break;
    default:
        printf("Not recognized\n");
        break;
    }
    return 0;
}
