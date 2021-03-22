#include<stdio.h>
int main()
{
    char ch;
    ch=getchar();
    switch(ch)
    {
    case 'W':
    case 'w':
        printf("White\n");
        break;
    case 'R':
    case 'r':
        printf("Red\n");
        break;
    default:
        printf("Not recognized\n");
        break;
    }
    return 0;
}
