#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("the smallest number is : %d", a<b? a:b);
    return 0;
}