#include<stdio.h>
int main()
{  //even-->1
  //odd-->0
    int x;
    printf("enter the number");
    scanf("%d",&x);
    printf("%d", x%2 == 0);
    return 0;
}