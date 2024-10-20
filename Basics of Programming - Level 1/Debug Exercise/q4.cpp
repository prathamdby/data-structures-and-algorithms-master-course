#include <iostream>
using namespace std;

int main()
{
    // Pattern
    /*
    1
    22
    333
    4444
    */

    // 4 rows

    int i, j, n;
    cin >> n;

    // Changed < to <=
    for (i = 1; i <= n; i++)
    {
        // Changed < n to < i + 1
        for (j = 1; j < i + 1; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}
