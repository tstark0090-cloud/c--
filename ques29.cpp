#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter N: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        sum += i * i;
    }

    cout << "Sum = " << sum;

    return 0;
}