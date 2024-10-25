#include <iostream>
#include <vector>
using namespace std;

int findUnique(const vector<int> &arr)
{
    int uniqueNumber = 0;
    for (int num : arr)
    {
        uniqueNumber ^= num; // XOR-ing every number in the vector with each other
                             // So that same numbers cancel out each other
    }
    return uniqueNumber;
}

int main()
{
    // Bits (0 and 1)

    // Bitwise Operators
    // & (And)
    // | (Or)
    // ^ (XOR)
    // ~ (Not)
    // << (Left Shift)
    // >> (Right Shift)

    // & (And)
    // 1 & 1 -> 1 else 0
    // Example:
    // 5 & 3 -> 1
    // as 101 & 011 -> 001

    // cout << (5 & 3) << endl;
    // cout << (5 & 5) << endl; // Same numbers have same bits so output will be the same

    // | (Or)
    // 0 & 0 -> 0 else 1
    // Example:
    // 5 & 3 -> 1
    // as 101 & 011 -> 111

    // cout << (5 | 3) << endl;
    // cout << (5 | 5) << endl; // Same numbers have same bits so output will be the same

    // Any number Or with 0 gives same number only

    // Application of & (And)
    // N & 1 -> 0 = Even else Odd
    // cout << ((24 & 1) == 0) << endl; // True
    // cout << ((13 & 1) == 1) << endl; // True

    // Every odd number's least significant bit is 1
    // Modulus operators is resource intensive (only use when necessary)
    // Bitwise operats operate on the bit level making them fast

    // ~ (Not)
    // ~0 -> 1 | ~1 -> 0
    // Example:
    // ~5 -> -6
    // Basically adds 1 and makes it -ve

    // cout << (~4) << endl;

    // If the most significant bit in a binary number is 1 it means it's -ve
    // If its a negative number then to convert binary to decimal we calculate using 2's compliment
    // 1's compliment -> Flip all bits (0 -> 1, 1 -> 0)
    // 2's compliment -> +1 to last bit of 1's compliment then calculate the final bits (binary number)

    // ^ (XOR)
    // Same bits -> 0 else 1
    // Example:
    // 5 ^ 3 -> 6
    // as 101 & 011 -> 011
    // N ^ N = 0
    // N ^ 0 = N

    // cout << (5 ^ 3) << endl;

    // XOR can be used to find unique numbers easily
    // Example:
    // 3, 3, 8, 7, 8, 12, 14, 12, 14
    // Just XOR everyone with each other
    // 3 ^ 3 ^ 8 ^ 7 ^ 8 ^ 12 ^ 14 ^ 12 ^ 14
    // Now here same numbers get canclled out by each other, leaving 7 alone i.e. the unique number

    // vector<int> arr = {2, 3, 5, 4, 5, 3, 4}; // Yet to learn arrays and vectors
    // cout << "Unique Number is: " << findUnique(arr) << endl;

    // << (Left Shift)
    // Shifts all the bits to left by N
    // Example:
    // 5 << 1 -> 10
    // as 101 << by 1 -> 1010 -> 10
    // Multiplies by 2 ^ N in short

    // cout << (5 << 4) << endl;

    // >> (Right Shift)
    // Shifts all the bits to right by N
    // Example:
    // 5 >> 1 -> 2
    // as 101 >> by 1 -> 010 -> 2
    // Divides by 2 ^ N in short

    cout << (80 >> 4) << endl;

    return 0;
}
