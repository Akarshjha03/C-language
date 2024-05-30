#include<stdio.h>
int main()
{
    int salary;
    int dareness_allowence;
    int house_rent;
    int gross_salary;

    printf("enter the salary in rupees:\n");
    scanf("%d",&salary);

    dareness_allowence= 0.4 * salary;
    printf("dareness allowence is:%d\n",dareness_allowence);

    house_rent= 0.2 * salary;
    printf("the house rent is:%d\n",house_rent);

    gross_salary= salary+dareness_allowence+house_rent;
    printf("the gross salary is:%d\n",gross_salary);
    
    return 0;
}