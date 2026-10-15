#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break; 
        }
    }

    if (isPrime && num > 1)
        cout << num << " is prime.";
    else
        cout << num << " is not prime.";

    return 0;
}
