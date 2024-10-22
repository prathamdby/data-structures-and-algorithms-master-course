#include <iostream>
using namespace std;

bool isValidTriangle(int a, int b, int c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)
        return true;
    else
        return false;
}

int main()
{
    // Check if valid triangle or not

    int a, b, c;
    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    bool validTriange = isValidTriangle(a, b, c);

    cout << (validTriange ? "Valid Triangle" : "Invalid Triangle") << endl;

    return 0;
}
