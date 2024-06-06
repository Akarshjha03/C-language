//this program is made of basic while loop

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}