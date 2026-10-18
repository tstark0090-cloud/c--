#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime factors of " << num << " are: ";

    // Factor out 2s
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }

    // Factor out odd primes
    for (int i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    return 0;
}
