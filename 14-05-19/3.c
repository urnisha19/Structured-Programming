#include<stdio.h>
int main()
{
    int a;
    double b;
    float c;
    char d;
    scanf("%d %lf %f %c", &a, &b, &c, &d);
    printf("a=%d\n", a);
    printf("b=%lf\n", b);
    printf("c=%f\n", c);
    printf("d=%c\n", d);
    return 0;
}

