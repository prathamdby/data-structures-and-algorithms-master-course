#include <iostream>
using namespace std;

void printEvenNumbersFrom1ToN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
}

int main()
{
    // Print only even numbers from 1 to N

    int n;
    cout << "Enter N: ";
    cin >> n;

    printEvenNumbersFrom1ToN(n);

    return 0;
}
