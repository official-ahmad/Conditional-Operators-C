#include <stdio.h>
#include <conio.h>
int main()

{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a > b ? printf("%d is larger", a) : printf("%d is larger", b);

    getch();
}