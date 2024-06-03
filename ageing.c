//contains code for if-else topic for identifying the age of user

#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);

    if(age>18){
        printf("he is an adult\n");
        printf("he is  eligible to vote\n");
        printf("he is eligible to drive\n");
    }
    else {
        printf("he is not  an adult\n");
        printf("he cant drive\n");
        printf("he cant vote\n");
    }
    return 0;
}