#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character:\n");
    scanf("%c",&character);

    if(character>='A' && character<='Z'){
        printf("upper case");
    }
    else if(character>='a' && character<='z'){
        printf("lower case");
    }
    else{
        printf("not a valid character");
    }
    return 0;
}