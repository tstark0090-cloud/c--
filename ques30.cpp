#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i * i * i; // cube of i
    }

    cout << "Sum of series 1^3 + 2^3 + ... + " << N << "^3 = " << sum;
    return 0;
}
