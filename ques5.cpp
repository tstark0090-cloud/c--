#include <iostream>
using namespace std;

int main() {
    double firstnum, secondnum;
    int choice;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> firstnum >> secondnum;

    switch (choice) {
        case 1:
            cout << "Result = " << firstnum + secondnum;
            break;

        case 2:
            cout << "Result = " << firstnum - secondnum;
            break;

        case 3:
            cout << "Result = " << firstnum * secondnum;
            break;

        case 4:
            cout << "Result = " << firstnum / secondnum;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}