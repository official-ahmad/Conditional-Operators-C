// #include <iostream>
// using namespace std;

// int main()

// {
//     int a, b, sum;

//     cout << "Enter first Number: ";
//     cin >> a;

//     cout << "Enter second number: ";
//     cin >> b;

//     sum = a / b;

//     if (a == 0)
//     {
//         cout << "Invlid operation";
//     }

//     if (b == 0)
//     {
//         cout << "Math error";
//     }
    

//     else
//     {
//         cout << "The modulus of numbers is: " << sum << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
int main()

{
    float a , b ,c;
    
    cout << "Enter obtained marks: ";
    cin >> a;

    cout << "Enter total marks: ";
    cin >> b;

    c = a * b / 100;
    cout << "Percentage%: " << c << endl;

    return 0;
}