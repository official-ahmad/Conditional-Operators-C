#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
    getch();
}