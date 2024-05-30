#include<stdio.h>
int main()
{
    float fahrenheit;
    float celcius;

    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f",&fahrenheit);

    celcius = (fahrenheit - 32) * 5/9;
    printf("the temperature in centigrade is:%f\n",celcius);
    
    return 0;
}