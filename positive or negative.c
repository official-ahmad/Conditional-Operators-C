#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
    int a;

    printf("Enter Number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Number is positive");
    }

    else if(a < 0){
        printf("Number is negative");
    }

    else{
        printf("Number is zero");
    }
    
    getch();
}