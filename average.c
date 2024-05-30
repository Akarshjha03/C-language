#include<stdio.h>
int main()
{
    int x,y,z,avg;
    printf("enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    avg= (x+y+z)/3;
    printf("the average of 3 numbers is: %d", (x+y+z)/3);
    return 0;
}