#include <iostream>
using namespace std;

int main()
{
    // variable define
    // int age = 25;
    // cout << "Babbar's age is: " << age << endl;

    // declaration (contains a garbage value by default)
    // int age;
    // cout << age;

    // definition
    // int age = 18;
    // cout << age << endl;

    // manipulation or updation (updates the value stored in the variable memory block)
    // age = 101;
    // cout << age << endl;

    // int
    // int age = 18;
    // char
    // char grade = 'A';
    // float
    // float PI = 3.14;
    // double (by default rounds up to 6 digits)
    // double weight = 55.48329;
    // boolean (0 = false and 1 = true)
    // bool isMale = true;
    // bool isChild = 1;
    // bool isFemale = false;
    // bool isGirl = 0;

    // cout << age << endl;
    // cout << grade << endl;
    // cout << PI << endl;
    // cout << weight << endl;
    // cout << isMale << endl;

    // sizeof (check how many bytes something is taking up)
    // int age = 18;
    // cout << sizeof(age) << endl;

    // unsigned = only positive values
    // signed = both positive and negative values

    // unsigned: 0 -- 2 ^ n - 1 (range of values)
    // 2 ^ n - 1 <-- formula for calculating the maximum value you can store in n bits
    // for example 3 bits then:
    // 2 ^ 3 - 1 = 8 - 1 = 7 <-- maxium value you can store in 3 bits

    // signed: 2 ^ (n - 1) -- 2 ^ (n - 1) (range of values)

    // if boolean can be indicate T/F by 1/0 then why does it take up 1 byte instead of 1 bit?
    // ans: 1 byte is the smallest addressable space in memory

    // redefinition is allowed as long as its at different scopes
    int age = 18;
    {
        int age = 19;
        // int age = 32; // this will cause error as its in the same scope
    }
    {
        int age = 34;
    }

    // Decimal to binary and vice versa
    // Decimal to binary happens via base 10 to base 2 conversion
    // Divide the decimal repeatedly by 2 and calculate the remainder at each step
    // Put the remainders together to get the decimal number

    // Binary to deciaml happens via base 2 to base 10 conversion
    // Calculate the contributions by 2 ^ n * binary digit, where n is the position/index
    // Then add up all of the contributions to get the decimal
    // Finally, get the binary number by counting the digits from bottom to top

    // Example:
    // 24

    // 24 / 2 = 12 (0)
    // 12 / 2 = 6 (0)
    // 6 / 2 = 3 (0)
    // 3 / 2 = 1 (1)
    // 1 / 2 = 0 (1)

    // Final: 11000

    // 11000
    // Base 10 to base 2 conversion also happens from right to left

    // 2 ^ 0 * 0 = 0
    // 2 ^ 1 * 0 = 0
    // 2 ^ 2 * 0 = 0
    // 2 ^ 3 * 1 = 8
    // 2 ^ 4 * 0 = 16

    // Final: 0 + 0 + 0 + 8 + 16 = 24

    return 0;
}
