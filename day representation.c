#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()

{
    float a;
    printf("Enter temperarture: ");
    scanf("%f", &a);

    if (a > 35)
    {
        printf("Hot Day! ");
    }

    else if (a >= 25 && a <= 35)
    {
        printf("Pleasent day ");
    }

    else
    {
        printf("Cool day ");
    }

    getch();
}
