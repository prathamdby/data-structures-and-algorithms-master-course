#include <iostream>
// missing 'using namespace std;'
// so we use std::(function)
// :: is called the scope resolution operator
// :: is used to define or access values and methods of a namespace

int main()
{
    // variable declare
    // bool marks; // no value because its only declaration not definiton
    // cout << "Enter your marks:" << endl;

    // user input
    // boolean type can only accept 0 or 1 as user input
    // cin >> marks;
    // cout << "Babbar's marks are: " << marks << endl;

    // cin.ignore(count, delimiter);
    // cin.ignore() by itself can be used to ignore newline character
    // cin.ignore(10, ' ') can be used to ignore upto 10 characters of input or until a space is reached

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore(); // Ignore the newline character

    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    std::cout << "Your age is " << age << " and your grade is " << grade << "." << endl;

    // cin.fail() is used to check if the last input operation failed
    // example: if a user entered a character for an integer input

    // getline(cin, variable, delimiter);
    // getline as the name says gets the whole line until the delimiter is encountered and stores it in the specified variable

    return 0;
}
