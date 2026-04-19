// #include <stdio.h>
// #include <conio.h>
// int main()

// {
//     double a, b, c;
//     printf("Enter obtained marks: ");
//     scanf("%f", &a);

//     printf("Enter total marks: ");
//     scanf("%f", &b);

//     c = a * b / 100;
//     printf("%1f", &c);

//     getch();
// }

#include <stdio.h>
#include <conio.h>

int main()
{
    double a, b, c;

    printf("Enter obtained marks: ");
    scanf("%lf", &a);

    printf("Enter total marks: ");
    scanf("%lf", &b);

    c = (a / b) * 100; 

    printf("Percentage = %.2lf%%\n", c);

    getch();
    return 0;
}
  