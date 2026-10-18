#include <iostream>
using namespace std;

int main() {
    int num, temp, evenSum = 0, oddSum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        temp /= 10;
    }

    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;

    return 0;
}
