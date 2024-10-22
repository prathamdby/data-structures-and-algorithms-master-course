#include <iostream>
using namespace std;

int calculateFactorial(int n)
{
    int fact = 1;

    for (; n >= 1; n--)
    {
        fact *= n;
    }

    return fact;
}

int main()
{
    // Calculate factorial of N

    int n;
    cout << "Enter N: ";
    cin >> n;

    int fact = calculateFactorial(n);

    cout << n << "!: " << fact << endl;

    return 0;
}
