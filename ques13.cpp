#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int num = 2; num <= N; num++) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break; 
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
