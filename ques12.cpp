#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many terms: ";
    cin >> n;

    int a = 0, b = 1, count = 0;

    while (count < n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }

    return 0;
}
