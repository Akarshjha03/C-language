//this code is designed for more complex grading system 

#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);

    if(marks<30){
        printf("grade C");
    }
    else if (marks>=30 && marks<70){
        printf("grade B");
    }
    else if (marks>=70 && marks<90){
        printf("grade A");
    }
    else if (marks>=90 && marks<100){
        printf("grade O");
    }
    else {
        printf("FAIL");
    }
    return 0;
}