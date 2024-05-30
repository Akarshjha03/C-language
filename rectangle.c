#include <stdio.h>

int main()
{
    //declaring variables that is to be used
    int length, width, perimeter;

   //taking input from user for length & breadth 
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter width of the rectangle: ");
    scanf("%d", &width);

  //writing the formula  of perimeter of rectangle
    perimeter = 2 * (length + width);

  //printing the final answer
    printf("Perimeter of rectangle = %d", perimeter);

    return 0;

}