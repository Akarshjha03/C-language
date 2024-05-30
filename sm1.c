#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c){
        printf("the smallest is %d",a);
    }
    else if(b<a && b<c){
        printf("the smallest is %d",b);
    }
    else {
        printf("the smallest is %d", c);
    }
    return 0;
}