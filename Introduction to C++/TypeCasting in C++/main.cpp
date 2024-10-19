#include <iostream>
using namespace std;

int main()
{
    // implicit conversion
    // compiler performs it on its own
    // converts smaller data type to a larger data type to maintain data precision

    // int num1 = 5;
    // float num2 = 10.5;
    // float num3 = num1 + num2; // num1 gets converted to float to maintain data precision
    // as, if num2 was converted to int, it would lose the 0.5 making it lose data
    // cout << num3 << endl;

    // int a = 65;
    // char ch = a; // int gets converted into char
    // cout << ch << endl;

    // explicit conversion
    // we programmers specify the type explicity
    // syntax: (type) value

    // int num1 = 10;
    // float num2 = 5.5;
    // float num3 = num1 + (int)num2; // here now num2 first becomes int instead of num1 becoming float
    //                                // as we specified for it to do so manually
    // cout << num3 << endl;

    // double pi = 3.14159265;
    // int a = (int)pi; // we lose all precision due to conversion to int
    // cout << a << endl;

    // int / int -> int
    // float / float -> float
    // int / float -> float / int -> float
    // if float is involved, answer will always be in float

    int num1 = 10;
    int num2 = 3.0;                  // 3.0 but since it's int variable, value will be in int i.e. 3
    float num3 = num1 / (float)num2; // Here we convert the 3 back to 3.0, making 3.333... come
    cout << num3 << endl;

    return 0;
}
