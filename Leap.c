#include<stdio.h>
void main()
    {
    int y;
    printf("Enter the year to check:\n");
    scanf("%d",&y);
    if((y%4==0) || (y%100==0))
    printf("Leap Year");
    else
    printf("Not a leap year");
    }
