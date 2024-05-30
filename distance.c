#include<stdio.h>
int main()
{
    int KM;
    int METERS;
    int FEETS;
    int INCHES;

    printf("Enter the distance in KM:\n");
    scanf("%d",&KM);

    METERS= KM * 1000;
    printf("distance in meters is:%d\n",METERS);

    FEETS= KM * 3281;
    printf("distance in feets is:%d\n",FEETS);

    INCHES= KM * 39370;
    printf("distance in inches is:%d\n",INCHES);

    return 0;
}