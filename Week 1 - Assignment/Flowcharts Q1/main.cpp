#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    // Multiply two numbers

    int a, b;
    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    int product = multiply(a, b);

    cout << a << " x " << b << " = " << product << endl;

    return 0;
}
