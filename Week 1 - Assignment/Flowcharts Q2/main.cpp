#include <iostream>
using namespace std;

int calculatePerimeter(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // Calculate Perimeter

    int a, b, c;
    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    int perimeter = calculatePerimeter(a, b, c);

    cout << a << " + " << b << " + " << c << " = " << perimeter << endl;

    return 0;
}
