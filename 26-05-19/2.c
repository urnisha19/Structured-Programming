#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    switch(x)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    default:
        printf("Not recognized");
        break;
    }
    return 0;
}
