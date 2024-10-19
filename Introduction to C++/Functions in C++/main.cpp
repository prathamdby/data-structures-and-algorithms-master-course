#include <iostream>
#include <cmath>
using namespace std;

// signature (specifiying the types), declaration, and definition
// int sum(int a, int b)
// {
// return a + b;
// }

// void printMyName()
// {
//     cout << "babbar" << endl;
// }

// signature and declaration
// void printMyName();

// returning values in void function causes error
// but non-value returns are totally fine

// example functions
// int getMultiplication(int x, int y, int z)
// {
//     return x * y * z;
// }

// void printNameTenTimes()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "babbar" << endl;
//     }
// }

// void printMultiples(int n)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << n * i << endl;
//     }
// }

// int convertIntoCelsius(int far)
// {
//     return (far - 32) * 5 / 9;
// }

// char convertIntoUppercase(char ch);

// homework
void printCountingTill100()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}

int calculateSimpleInterest(int principal, int timeSpan, int rateOfInterest)
{
    // timeSpan is in years
    return (principal * timeSpan * rateOfInterest) / 100;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void printPrimeNumbersTill100()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
}

bool checkIfEligibleForVoting(int age)
{
    if (age < 18)
        return false;

    return true;
}

double calculateSIPAmount(double monthlyAmount, double timeSpan, double rateOfReturn)
{
    // timeSpan is in years
    double p = monthlyAmount;
    double r = rateOfReturn / 12 / 100;
    double n = timeSpan * 12;

    double accumulatedValue = p * ((pow(1 + r, n) - 1) / r) * (1 + r);

    return round(accumulatedValue);
}

int main()
{
    // function call
    // int ans = sum(10, 5);
    // cout << ans << endl;

    // printMyName();

    // int multiplicationAnswer = getMultiplication(5, 4, 3);
    // cout << multiplicationAnswer << endl;

    // printNameTenTimes();

    // int m = 5;
    // printMultiples(m);

    // int far = 32;
    // int ans = convertIntoCelsius(far);
    // cout << "In Celsius: " << ans << endl;

    // char result = convertIntoUppercase('z');
    // cout << result << endl;

    // homework
    // printCountingTill100();

    // int interestAmount = calculateSimpleInterest(10000, 2, 12);
    // cout << interestAmount << endl;

    // printPrimeNumbersTill100();

    // bool isEligible = checkIfEligibleForVoting(4);
    // cout << isEligible << endl;

    double totalValue = calculateSIPAmount(500, 2, 12);
    cout << totalValue << endl;

    return 0;
}

// Keeping it here without declaration, will cause error as the compiler can't find the function
// void printMyName()
// {
//     cout << "babbar" << endl;
// }

// definition. Now it will work as we declared it above so it knows this function exists
// void printMyName()
// {
//     cout << "pratham" << endl;
// }

// char convertIntoUppercase(char ch)
// {
//     return ch - 'a' + 'A';
// }
