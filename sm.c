#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the 2 number");
    scanf("%d%d", &x,&y);
    if(x<y){
        printf("the smallest is : %d",x);
    }
    else{
        printf("the smallest is : %d",y);
    }
    return 0;
}