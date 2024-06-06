//this code is designed for grading system in school 

#include<stdio.h>
int main ()
{
    int marks;
    printf("enter the marks:\n");
    scanf("%d",&marks);

    if(marks<=30){
        printf("fail");
    }
    else{
        printf("pass");
    }
    return 0;
}