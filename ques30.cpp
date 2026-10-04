#include <iostream>
using namespace std;

int main() {
    int number;
    long long sum = 0;

    cout << "Enter N: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        sum += i * i * i;
    }

    cout << "Sum = " << sum;

    return 0;
}