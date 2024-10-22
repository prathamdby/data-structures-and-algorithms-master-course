#include <iostream>
using namespace std;

void printMaximumNumber(int a, int b, int c)
{
    if (a > b)
        if (a > c)
            cout << a << endl;
        else
            cout << c << endl;
    else
    {
        if (b > c)
            cout << b << endl;
        else
            cout << c << endl;
    }
}

int main()
{
    // Print maxiumum of three numbers

    int a, b, c;
    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    printMaximumNumber(a, b, c);

    return 0;
}
