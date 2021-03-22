#include<stdio.h>
int main()
{
    int i,arr[100],n;
    scanf("%d", &n); //enter the number of input u want to print
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);//input the numbers
    for(i=0; i<n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
