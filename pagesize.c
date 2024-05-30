#include<stdio.h>
int main()
{
    int widthA0 = 1189;
    int heightA0 = 841;
    printf("A0: %d mm x %d mm\n",widthA0,heightA0);

    int widthA1 = heightA0;
    int heightA1 = widthA0/2;
    printf("A1: %d mm x %d mm\n",widthA1,heightA1);

    int widthA2 = heightA1;
    int heightA2 = widthA1/2;
    printf("A2: %d mm x %d mm\n",widthA2,heightA2);

    return 0;
}