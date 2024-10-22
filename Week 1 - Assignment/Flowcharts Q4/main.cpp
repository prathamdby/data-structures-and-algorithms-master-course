#include <iostream>
using namespace std;

void printFromNto1(int n)
{
    if (n < 1)
    {
        cout << "Please enter a number bigger than 1." << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // Print from N to 1

    int n;
    cout << "Enter N: ";
    cin >> n;

    printFromNto1(n);

    return 0;
}
