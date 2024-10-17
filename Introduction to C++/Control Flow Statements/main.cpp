#include <iostream>
using namespace std;

int main()
{
    // if & else statement
    // int budget;

    // cout << "Enter your budget: ";
    // cin >> budget;

    // if (budget > 2000000)
    // {
    //     cout << "You can buy Scorpio" << endl;
    // }
    // else
    // {
    //     cout << "You cannot buy Scorpio" << endl;
    // }

    // if-else if & if-else if-else statements
    // int marks = 55;

    // if (marks > 90)
    // {
    //     cout << "A" << endl;
    // }
    // else if (marks > 80)
    // {
    //     cout << "B" << endl;
    // }
    // else if (marks > 70)
    // {
    //     cout << "C" << endl;
    // }
    // else if (marks > 60)
    // {
    //     cout << "D" << endl;
    // }
    // else
    // {
    //     cout << "You failed" << endl;
    // }

    // Nested if & else statements
    int height;
    cout << "Enter your height (in ft): ";
    cin >> height;

    int weight;
    cout << "Enter your weight (in kgs): ";
    cin >> weight;

    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "You have a good BMI" << endl;
        }
        else
        {
            cout << "Bhai tujhse na ho payega" << endl;
        }
    }
    else
    {
        cout << "Complan dila du" << endl;
    }

    return 0;
}
