#include <iostream>
using namespace std;

int main()
{
    // do while loop
    // executes first, checks for logic later
    // first iteration doesn't check any logic
    // int i = 1;
    // do
    // {
    //     cout << i << " ";
    //     i++;
    // } while (i <= 5);

    // homework
    // for (int i = 1; i <= 5; i++)
    //     ;
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // gives error

    // int i;
    // if (cin >> i)
    // {
    //     cout << "Babbar" << endl;
    // }
    // valid input returns true so it prints Babbar

    // if (cout << "Hi")
    // {
    //     cout << "Babbar" << endl;
    // }
    // prints both Hi and Babbar

    // nested loops
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         cout << "i: " << i << " j: " << j << endl;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
