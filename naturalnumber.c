//printing natural numbers using for loop

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is:%d",sum);
    return 0;
}