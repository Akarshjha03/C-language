//This is made for grading system 
//Made using for loop 

#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);

    if(marks>90){
        printf("grade O");
    }
    else if(80<marks && marks<90){
        printf("grade A+");
    }
    else{
        printf("grade F");
    }
    return 0;
}