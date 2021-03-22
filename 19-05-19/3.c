#include<stdio.h>
int main()
{
    double n;
    int choice;
    printf("1:Feet to Meter, 2:Meter to Feet\n");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter the number of Feet\n");
        scanf("%lf", &n);
        printf("Meter=%lf", n/3.28);
    }
    else if(choice==2)
    {
        printf("Enter the number of Meter\n");
        scanf("%lf", &n);
        printf("Feet=%lf", n*3.28);
    }
    return 0;
}
