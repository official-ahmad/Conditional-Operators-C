#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
    int a, b, c;
    printf("Enter obtained marks: ");
    scanf("%d", &a);

    printf("Enter total marks: ");
    scanf("%d", &b);

    c = a * b / 100;
    printf("Percentage: %d", c);

    getch();
}