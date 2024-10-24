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

void printMinPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // Stars (N - Row)
        for (int i = 0; i < n - row; i++)
            cout << "*";

        // Spaces (2 x Row + 1)
        for (int i = 0; i < 2 * row + 1; i++)
            cout << " ";

        // Stars (N - Row)
        for (int i = 0; i < n - row; i++)
            cout << "*";

        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        // Stars (Row + 1)
        for (int i = 0; i < row + 1; i++)
            cout << "*";

        // Spaces (2 x (N - Row) - 1)
        for (int i = 0; i < 2 * (n - row) - 1; i++)
            cout << " ";

        // Stars (Row + 1)
        for (int i = 0; i < row + 1; i++)
            cout << "*";

        cout << endl;
    }
}

void printFancy12(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i < (2 * row) + 1; i++)
        {
            if (i % 2 == 0)
                cout << row + 1;
            else
                cout << "*";
        }

        cout << endl;
    }
}

void printFullFancy12(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i < (2 * row) + 1; i++)
        {
            if (i % 2 == 0)
                cout << row + 1;
            else
                cout << "*";
        }

        cout << endl;
    }

    n--;

    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i < 2 * (n - row) - 1; i++)
        {
            if (i % 2 == 0)
                cout << n - row;
            else
                cout << "*";
        }

        cout << endl;
    }
}

void printABCBA(int n)
{
    for (int row = 0; row < n; row++)
    {
        char ch = 'A';

        for (int i = 0; i < row + 1; i++)
        {
            cout << ch;
            ch++;
        }

        ch--;

        while (ch > 'A')
        {
            ch--;
            cout << ch;
        }

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
    // printHollowDiamond(n);

    // Min Pyramid
    // ***** *****
    // ****   ****
    // ***     ***
    // **       **
    // *         *
    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***** *****
    // printMinPyramid(n);

    // Fancy12 Pattern
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 5*5*5*5*5
    // printFancy12(n);

    // Full Fancy12 Pattern
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 5*5*5*5*5
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
    // printFullFancy12(n);

    // ABCBA
    // A
    // ABA
    // ABCBA
    // ABCDCBA
    // ABCDEDCBA
    printABCBA(n);

    return 0;
}
