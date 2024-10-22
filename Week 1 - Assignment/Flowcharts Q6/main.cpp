#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    // Check if a number is Prime or not

    int n;
    cout << "Enter N: ";
    cin >> n;

    bool prime = isPrime(n);

    cout << n << ": " << prime << endl;

    return 0;
}
