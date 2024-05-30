#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    for(int i=n;i>=1;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}