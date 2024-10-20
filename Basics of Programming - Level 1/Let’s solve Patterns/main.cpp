#include <iostream>
using namespace std;

int main()
{
    // outer loop execution depends on the inner loop finishing

    // square pattern
    /*
    ****
    ****
    ****
    ****
    */

    // 4 rows, 4 cols

    // row -> outer
    // col -> inner

    // int side;
    // cout << "Enter length of side" << endl;
    // cin >> side;

    // for (int row = 0; row < side; row++)
    // {
    //     for (int col = 0; col < side; col++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // rectangle pattern
    /*
    *****
    *****
    *****
    */

    // 3 rows, 5 cols

    // int length;
    // int width;

    // cout << "Enter length" << endl;
    // cin >> length;

    // cout << "Enter width" << endl;
    // cin >> width;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < width; col++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // hollow rectangle pattern
    /*
    **********
    *        *
    *        *
    **********
    */

    // 4 rows, 10 cols

    // int length;
    // int width;

    // cout << "Enter length" << endl;
    // cin >> length;

    // cout << "Enter width" << endl;
    // cin >> width;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < width; col++)
    //     {
    //         if (row == 0 || row == length - 1)
    //             cout << "*";
    //         else
    //         {
    //             if (col == 0 || col == width - 1)
    //                 cout << "*";
    //             else
    //                 cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    // hollow square pattern
    /*
    ****
    *  *
    *  *
    ****
    */

    // 4 rows, 4 cols

    // int side;
    // cout << "Enter length of side" << endl;
    // cin >> side;

    // for (int row = 0; row < side; row++)
    // {
    //     for (int col = 0; col < side; col++)
    //     {
    //         if (row == 0 || row == side - 1 || col == 0 || col == side - 1)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // diagonal pattern

    // *
    //  *
    //   *
    //    *
    //     *

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < length; col++)
    //     {
    //         if (row == col)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // hollow square with diagonal pattern
    /*
    ****
    ** *
    * **
    ****
    */

    // 4 rows, 4 cols

    // int side;
    // cout << "Enter length of side" << endl;
    // cin >> side;

    // for (int row = 0; row < side; row++)
    // {
    //     for (int col = 0; col < side; col++)
    //     {
    //         if (row == 0 || row == side - 1 || col == 0 || col == side - 1 || row == col)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // half pyramid pattern
    /*
     *
     **
     ***
     ****
     */

    // 4 rows

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // for (int row = 0; row < length; row++) // can also be written as <= length (for row starting at 1)
    // {
    //     for (int col = 0; col < row + 1; col++) // can also be written as <= row (for col starting at 1)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // inverted half pyramid pattern
    /*
     ****
     ***
     **
     *
     */

    // 4 rows

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // my version
    // for (int row = length; row > 0; row--)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < length - row; col++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // hollow half pyramid pattern
    /*
     *
     **
     * *
     *  *
     *****
     */

    // 5 rows

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         if (row == 0 || row == length - 1 || col == 0 || col == row)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // inverted hollow half pyramid pattern
    /*
     *****
     *  *
     * *
     **
     *
     */

    // 5 rows

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < length - row; col++)
    //     {
    //         if (row == 0 || row == length - 1 || col == 0 || col == (length - row) - 1)
    //             cout << "*";
    //         else
    //             cout << " ";
    //     }

    //     cout << endl;
    // }

    // numeric half pyramid
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    */

    // 4 rows

    // int length;
    // cout << "Enter length" << endl;
    // cin >> length;

    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1 << " ";
    //     }

    //     cout << endl;
    // }

    // inverted numeric half pyramid
    /*
    1 2 3 4
    1 2 3
    1 2
    1
    */

    // 4 rows

    int length;
    cout << "Enter length" << endl;
    cin >> length;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < length - row; col++)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
