#include <stdio.h>
#include <conio.h>
int main()

{
    char ch;
    printf("Enter an alphabet: ");
    ch = getche();

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("\nIt is a vowel!");
        break;

    case 'e':
    case 'E':
        printf("\nIt is a vowel!");
        break;

    case 'i':
    case 'I':
        printf("\nIt is a vowel!");
        break;

    case 'o':
    case 'O':
        printf("\nIt is a vowel!");
        break;
    case 'u':
    case 'U':
        printf("\nIt is a vowel!");
        break;

    default:
        printf("\nIt is not a vowel.");
        break;
    }
}