#include <iostream>
using namespace std;

int calculateSimpleInterest(int p, int r, int t)
{
    return (p * r * t) / 100;
}

int main()
{
    // Find simple interest
    // (Method is from the assignment video)

    int p, r, t;
    cout << "Enter P: ";
    cin >> p;

    cout << "Enter R: ";
    cin >> r;

    cout << "Enter T:";
    cin >> t;

    int simpleInterest = calculateSimpleInterest(p, r, t);

    cout << "(" << p << " * " << r << " * " << t << ")/100 = " << simpleInterest << endl;

    return 0;
}
