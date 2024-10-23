#include <iostream>
using namespace std;

void printFullPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // Spaces (N - Row - 1)
        for (int i = 0; i < n - row - 1; i++)
            cout << " ";

        // Stars (Row + 1)
        for (int i = 0; i < row + 1; i++)
            cout << "* ";

        cout << endl;
    }
}

void printInvertedFullPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // Spaces (Row)
        for (int i = 0; i < row; i++)
            cout << " ";

        // Stars (N - Row)
        for (int i = 0; i < n - row; i++)
            cout << "* ";

        cout << endl;
    }
}

void printDiamond(int n)
{
    printFullPyramid(n);
    printInvertedFullPyramid(n);
}

void printHollowPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // Spaces (N - Row - 1)
        for (int i = 0; i < n - row - 1; i++)
            cout << " ";

        // Stars (Row + 1)
        for (int i = 0; i < row + 1; i++)
            if (row == 0 || row == n - 1 || i == 0 || i == row)
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }
}

void printInvertedHollowPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // Spaces (Row)
        for (int i = 0; i < row; i++)
            cout << " ";

        // Stars (N - Row)
        for (int i = 0; i < n - row; i++)
            if (row == 0 || row == n - 1 || i == 0 || i == n - row - 1)
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }
}

void printHollowDiamond(int n)
{
    // Hollow Pyramid
    for (int row = 0; row < n; row++)
    {
        // Spaces (N - Row - 1)
        for (int i = 0; i < n - row - 1; i++)
            cout << " ";

        // Stars (Row + 1)
        for (int i = 0; i < row + 1; i++)
            if (row == 0 || i == 0 || i == row) // Modified the condition to not include the last row
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }

    // Inverted Hollow Pyramid
    for (int row = 0; row < n; row++)
    {
        // Spaces (Row)
        for (int i = 0; i < row; i++)
            cout << " ";

        // Stars (N - Row)
        for (int i = 0; i < n - row; i++)
            if (row == n - 1 || i == 0 || i == n - row - 1) // Modified the condition to not include the first row
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    // Full Pyramid
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // printFullPyramid(n);

    // Inverted Full Pyramid
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    // printInvertedFullPyramid(n);

    // Diamond
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    // printDiamond(n);

    // Hollow Pyramid
    //     *
    //    * *
    //   *   *
    //  *     *
    // * * * * *
    // printHollowPyramid(n);

    // Inverted Hollow Pyramid
    // * * * * *
    //  *     *
    //   *   *
    //    * *
    //     *
    // printInvertedHollowPyramid(n);

    // Hollow Diamond
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *
    printHollowDiamond(n);

    return 0;
}
