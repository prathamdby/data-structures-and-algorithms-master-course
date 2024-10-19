#include <iostream>
using namespace std;

int main()
{
    // unary operators
    // ++ --
    // pre ++/-- = +/- first then use/access
    // post ++/-- = use/access first then +/-

    // int x = 5;
    // cout << x++ << endl; // No increment because use/acess first
    // cout << ++x << endl; // Increment because use/access later
    //                      //  same for --

    // binary operators
    // arithmetic operators
    // + - * / %
    // int a = 10;
    // int b = 5;

    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl;
    // cout << a % b << endl; // Returns remainder
    // % is a resource consuming operation

    // basic typecasting
    // cout << 5 / 2 << endl; // Returns 2, why? Because int/int
    // cout << 5.0 / 2 << endl;

    // relational operators
    // returns true or false
    //  > < >= <= == !=
    // cout << (10 != 2) << endl;
    // cout << (5 >= 5) << endl;
    // cout << (3 < 2) << endl;

    // logical operators
    // && || !
    // bool cond1 = (10 < 5);
    // bool cond2 = (5 < 5);
    // bool cond3 = (2 != 2);

    // if (cond1 && cond2 && cond3)
    // {
    //     cout << "All conditions are true" << endl;
    // }
    // else
    // {
    //     cout << "All conditions are not true" << endl;
    // }

    // if (cond1 || cond2 || cond3)
    // {
    //     cout << "Atleast one codndition is true" << endl;
    // }
    // else
    // {
    //     cout << "All conditions are false" << endl;
    // }

    // cout << cond1 << endl;
    // cout << !cond1 << endl; // negation due to !

    // assignment operators
    // = += -= *= /= %=
    // basically performing arithmetic operations then assigning the result
    // int x = 5;

    // cout << x << endl;

    // x = x + 10;
    // x += 10;

    // x = x * 10;
    // x *= 10;

    // x = x / 5;
    // x /= 5;
    // cout << x << endl;

    // bitwise operators
    // & | ~ << >> ^
    // bit level operations

    // & -> 1 & 1 = 1 else 0
    // cout << (5 & 4) << endl; // 5's binary number ends in 101
    // 4's binary number ends in 100
    // 101 & 100 = 100
    // so the output will be 4

    // | -> 0 & 0 = 0 else 1
    // cout << (5 | 4) << endl;
    // 101 | 100 = 101

    // ~ -> negation. 0 = 1, 1 = 0
    // cout << ~5 << endl; // 5's binary number ends in 101 becomes 010
    // cout << ~1 << endl;

    // << -> left shift. Multiplies by 2 ^ n in short.
    // shifts all the bits to the left by number specified position
    // i.e. if << 1 then shifts all bit to the left once
    // cout << (5 << 3) << endl;

    // >> -> right shift. Opposite of left shift. Divides by 2 ^ n in short.
    // same concept as left shift just divide instead of multiply
    // cout << (1 >> 1) << endl; // 0 because nothing left to divide
    // cout << (20 >> 3) << endl;

    // ^ -> XOR. same bits = 0 else 1
    // if you want cancel out two same things use ^
    cout << (5 ^ 5) << endl;
    cout << (5 ^ 4) << endl;

    return 0;
}
