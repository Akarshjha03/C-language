#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    float radius,circumference;

    printf("Enter the length,breadth,radius values:\n");
    scanf("%d %d %f",&length,&breadth,&radius);

    area = length * breadth;
    perimeter = 2*(length+breadth);
    circumference = 2*(3.14*radius);

    printf("the area of rectangle is:%d\n",area);
    printf("the perimeter of rectangle is:%d\n",perimeter);
    printf("the circumference of circle is:%f\n",circumference);

    return 0;
}