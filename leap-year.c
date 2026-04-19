#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()

{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%4 == 0 && year%100 !=0 || (year % 400 == 0))
    {
        printf("Leap Year!");

    }

    else{
        printf("Not a leap year");
    }
    
    getch();
}