#include<stdio.h>
int main()
{
    int a,b,c;
    int aggregate;
    float percentage;

    printf("Enter the marks of 3 subject\n");
    scanf("%d %d %d",&a,&b,&c);

    aggregate = a+b+c;
    percentage = (aggregate*100)/300;

    printf("aggregate marks are:%d\n",aggregate);
    printf("percentage is:%fr\n",percentage);
    return 0;
}